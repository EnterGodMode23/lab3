#ifndef LAB2_GRAPH_H
#define LAB2_GRAPH_H

#include "node.h"

typedef struct Fun Fun;
typedef struct Block Block;
typedef struct BlockList BlockList;
typedef struct GraphConfigBuilder GraphConfigBuilder;
typedef struct GraphConfig GraphConfig;
typedef struct Link Link;
typedef struct LinkList LinkList;

struct Fun {
    char *identifier;
    Node *body;
};

struct Block {
    int id;
    __attribute__((unused)) char *call;
    LinkList *predecessors;
    LinkList *exits;
};

struct BlockList {
    Block **blocks;
    int count;
};

struct GraphConfigBuilder {
    BlockList *after_loop_block_stack;
    BlockList *curr_loop_guard_stack;
    Block *current_block;
    __attribute__((unused)) BlockList *calls;
    int current_id;
    GraphConfig *cfg;
};

struct GraphConfig {
    char *procedureName;
    Block *entryblock;
    __attribute__((unused)) BlockList *finalblocks;
    int nextId;
};

struct Link {
    Block *source;
    Block *target;
    char *comment;
};

struct LinkList {
    Link **links;
    int count;
};

FilesNodes findProcedures();

Fun prepareFun(Node *node);

GraphConfig *initGraphConfig(Fun pf, int nextId, int num);

void graphConfigPrint(FILE *f, GraphConfig *cfg, int num, GraphConfig **pCfg, int i);

Block *createBlock(int id, char *call);

BlockList *initBlockList();

void graphConfigBuilderVisit(GraphConfigBuilder *cfgBuilder, Node *node);

GraphConfig *createGraphConfig(char *procedureName, Block *entryblock);

Link *createLink(Block *source, Block *target, char *string);

LinkList *createLinkList();

#endif //LAB2_GRAPH_H
