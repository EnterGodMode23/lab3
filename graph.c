#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

extern FilesNodes filesNodes[maxNodesInList];
extern int fileNum;

FilesNodes findProcedures() {
    FilesNodes funcDefs = initFileNodes();
    for (int i = 0; i < fileNum; ++i) {
        for (int j = 0; j < filesNodes[i].cnt; ++j) {
            if (strcmp(filesNodes[i].nodes[j]->nameNode, sourceItem) == 0) {
                funcDefs.nodes[funcDefs.cnt] = filesNodes[i].nodes[j];
                funcDefs.cnt++;
            }
        }
    }
    return funcDefs;
}

Fun prepareFun(Node *procedure) {
    Fun fun = {};
    if (!procedure) {
        printf("null procedure");
        return fun;
    }
    if (strcmp(procedure->nameNode, sourceItem) != 0) {
        printf("procedure not sourceItem");
        return fun;
    }
    if (!procedure->left) {
        printf("procedure without funcSignature");
        return fun;
    }
    if (!procedure->right) {
        printf("procedure without body");
        return fun;
    }
    if (!procedure->left->left) {
        printf("funcSignature without argDef");
        return fun;
    }
    if (!procedure->left->left->right) {
        printf("argDef without identifier");
        return fun;
    }
    fun.identifier = procedure->left->left->right->value;
    fun.body = procedure->right;
    return fun;
}


void blockPrint(Block *block, FILE *f) {
    fprintf(f, "\"%d\"", block->id);
}

void linkPrint(Link *link, FILE *f) {
    blockPrint(link->source, f);
    fprintf(f, " -> ");
    blockPrint(link->target, f);
    fprintf(f, "[label=\"%s\"];\n", link->comment);
}

int seenOrNot(int id, int count, int *seen) {
    for (int i = 0; i < count; ++i) {
        if (seen[i] == id) {
            return 1;
        }
    }
    return 0;
}

void recPrint(FILE *f, Block *block, int *seen, int *count, GraphConfig **cfgs, int countCfgs) {
    if (seenOrNot(block->id, *count, seen) != 0) {
        return;
    }
    seen[*count] = block->id;
    (*count)++;
    for (int i = 0; i < block->exits->count; ++i) {
        linkPrint(block->exits->links[i], f);
        recPrint(f, block->exits->links[i]->target, seen, count, cfgs, countCfgs);
    }
    if (block->exits->count == 0) {
        blockPrint(block, f);
        fprintf(f, " -> end;\n");
    }
}

void graphConfigPrint(FILE *f, GraphConfig *cfg, int num, GraphConfig **cfgs, int countCfgs) {
    int seen[1024];
    int count = 0;
    fprintf(f, "label=%s;\n", cfg->procedureName);
    recPrint(f, cfg->entryblock, seen, &count, cfgs, countCfgs);
    fprintf(f, "\nstart -> ");
    blockPrint(cfg->entryblock, f);
    fprintf(f, ";\n");
}

void GraphConfigInit(GraphConfigBuilder *cfgBuilder) {
    cfgBuilder->after_loop_block_stack = initBlockList();
    cfgBuilder->curr_loop_guard_stack = initBlockList();
    cfgBuilder->current_block = NULL;
}

Block *createBlock(int id, char *call) {
    Block *block = malloc(sizeof(Block));
    block->id = id;
    char *buf = malloc(strlen(call) * sizeof(char));
    strcpy(buf, call);
    block->call = buf;
    block->predecessors = createLinkList();
    block->exits = createLinkList();
    return block;
}

BlockList *initBlockList() {
    BlockList *list = malloc(sizeof(BlockList));
    list->blocks = malloc(sizeof(Block *) * 1024);
    list->count = 0;
    return list;
}

char *concat(char *a, char *b) {
    char *c = malloc(strlen(a) + strlen(b) + 1);
    sprintf(c, "%s%s", a, b);
    return c;
}

void LinkListPush(LinkList *list, Link *link) {
    list->links[list->count] = link;
    list->count++;
}

void BlockListPush(BlockList *list, Block *block) {
    list->blocks[list->count] = block;
    list->count++;
}


void BlockListPop(BlockList *list) {
    list->count--;
    if (list->count < 0) {
        list->count = 0;
    }
}

void exitBlock(Block *block, Block *nextBlock, char *comment) {
    Link *link = createLink(block, nextBlock, comment);
    LinkListPush(block->exits, link);
    LinkListPush(nextBlock->predecessors, link);
}

Block *GraphConfigBuilderCreateBlock(GraphConfigBuilder *cfgBuilder, char *call) {
    cfgBuilder->current_id++;
    return createBlock(cfgBuilder->current_id, call);
}

Block *GraphConfigBuilderCreateLoop(GraphConfigBuilder *cfgBuilder) {
    if (cfgBuilder->current_block->exits->count == 0) {
        return cfgBuilder->current_block;
    }
    Block *loop = GraphConfigBuilderCreateBlock(cfgBuilder, "");
    exitBlock(cfgBuilder->current_block, loop, "loop");
    return loop;
}

void ifBuilder(GraphConfigBuilder *cfgBuilder, Node *node) {
    Block *ifBlock = GraphConfigBuilderCreateBlock(cfgBuilder, "");
    exitBlock(cfgBuilder->current_block, ifBlock, concat("IF ", node->left->value));
    Block *afterIfBlock = GraphConfigBuilderCreateBlock(cfgBuilder, "");
    if (node->right->right != NULL) {
        Block *elseBlock = GraphConfigBuilderCreateBlock(cfgBuilder, "");
        exitBlock(cfgBuilder->current_block, elseBlock, "else");
        cfgBuilder->current_block = elseBlock;
        graphConfigBuilderVisit(cfgBuilder, node->right->right);
        if (cfgBuilder->current_block->exits->count == 0) {
            exitBlock(cfgBuilder->current_block, afterIfBlock, "");
        }
    } else {
        exitBlock(cfgBuilder->current_block, afterIfBlock, "");
    }
    cfgBuilder->current_block = ifBlock;
    graphConfigBuilderVisit(cfgBuilder, node->right->left);
    if (cfgBuilder->current_block->exits->count == 0) {
        exitBlock(cfgBuilder->current_block, afterIfBlock, "");
    }
    cfgBuilder->current_block = afterIfBlock;
}

void whileBuilder(GraphConfigBuilder *cfgBuilder, Node *node) {
    Block *loop = GraphConfigBuilderCreateLoop(cfgBuilder);
    cfgBuilder->current_block = loop;
    BlockListPush(cfgBuilder->curr_loop_guard_stack, loop);
    Block *whileBlock = GraphConfigBuilderCreateBlock(cfgBuilder, "");
    exitBlock(cfgBuilder->current_block, whileBlock, concat("while ", node->left->value));
    Block *afterWhile = GraphConfigBuilderCreateBlock(cfgBuilder, "");
    BlockListPush(cfgBuilder->after_loop_block_stack, afterWhile);
    exitBlock(cfgBuilder->current_block, afterWhile, "");
    cfgBuilder->current_block = whileBlock;
    graphConfigBuilderVisit(cfgBuilder, node->right);
    if (cfgBuilder->current_block->exits->count == 0) {
        exitBlock(cfgBuilder->current_block, loop, "");
    }
    cfgBuilder->current_block = afterWhile;
    BlockListPop(cfgBuilder->after_loop_block_stack);
    BlockListPop(cfgBuilder->curr_loop_guard_stack);
}

void doWhileBuilder(GraphConfigBuilder *cfgBuilder, Node *node) {
    Block *loop = GraphConfigBuilderCreateLoop(cfgBuilder);
    cfgBuilder->current_block = loop;
    BlockListPush(cfgBuilder->curr_loop_guard_stack, loop);
    Block *whileBlock = GraphConfigBuilderCreateBlock(cfgBuilder, "");
    exitBlock(loop, whileBlock, "do");
    cfgBuilder->current_block = whileBlock;
    Block *afterWhile = GraphConfigBuilderCreateBlock(cfgBuilder, "");
    BlockListPush(cfgBuilder->after_loop_block_stack, afterWhile);
    graphConfigBuilderVisit(cfgBuilder, node->left);
    exitBlock(cfgBuilder->current_block, loop, concat("while ", node->right->value));
    exitBlock(cfgBuilder->current_block, afterWhile, "");
    cfgBuilder->current_block = afterWhile;
    BlockListPop(cfgBuilder->after_loop_block_stack);
    BlockListPop(cfgBuilder->curr_loop_guard_stack);
}

void breakBuilder(GraphConfigBuilder *cfgBuilder, Node *node) {
    if (cfgBuilder->after_loop_block_stack->count == 0) {
        return;
    }
    exitBlock(cfgBuilder->current_block,
              cfgBuilder->after_loop_block_stack->blocks[cfgBuilder->after_loop_block_stack->count - 1],
              "break");
}

void graphConfigBuilderVisit(GraphConfigBuilder *cfgBuilder, Node *node) {
    if (!node) {
        return;
    }
    if (strcmp(node->nameNode, "if") == 0) {
        ifBuilder(cfgBuilder, node);
        return;
    } else if (strcmp(node->nameNode, "while") == 0) {
        whileBuilder(cfgBuilder, node);
        return;
    } else if (strcmp(node->nameNode, "dowhile") == 0) {
        doWhileBuilder(cfgBuilder, node);
        return;
    } else if (strcmp(node->nameNode, "break") == 0) {
        breakBuilder(cfgBuilder, node);
        return;
    } else {
        if (node->left) {
            graphConfigBuilderVisit(cfgBuilder, node->left);
        }
        if (node->right) {
            graphConfigBuilderVisit(cfgBuilder, node->right);
        }
    }
}

GraphConfig *createGraphConfig(char *procedureName, Block *entryblock) {
    GraphConfig *cfg = malloc(sizeof(GraphConfig));
    cfg->finalblocks = initBlockList();
    cfg->procedureName = procedureName;
    cfg->entryblock = entryblock;
    return cfg;
}

Link *createLink(Block *source, Block *target, char *comment) {
    Link *link = malloc(sizeof(Link));
    link->source = source;
    link->target = target;
    link->comment = comment;
    return link;
}

LinkList *createLinkList() {
    LinkList *list = malloc(sizeof(LinkList));
    list->links = malloc(sizeof(Link *) * 1024);
    list->count = 0;
    return list;
}

GraphConfig *GraphConfigBuild(GraphConfigBuilder *cfgBuilder, char *procedureName, Node *node, int nextId) {
    cfgBuilder->current_id = nextId;
    cfgBuilder->current_block = GraphConfigBuilderCreateBlock(cfgBuilder, "");
    cfgBuilder->cfg = createGraphConfig(procedureName, cfgBuilder->current_block);
    graphConfigBuilderVisit(cfgBuilder, node);
    cfgBuilder->cfg->nextId = cfgBuilder->current_id;
    return cfgBuilder->cfg;
}

GraphConfig *initGraphConfig(Fun pf, int nextId, int num) {
    GraphConfigBuilder cfgBuilder = {};
    GraphConfigInit(&cfgBuilder);
    GraphConfig *cfg = GraphConfigBuild(&cfgBuilder, pf.identifier, pf.body, nextId);
    return cfg;
}