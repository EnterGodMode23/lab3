#include <stdio.h>
#include "node.h"
#include <string.h>
#include <stdlib.h>

FilesNodes filesNodes[maxNodesInList];
int fileNum;

void destroy() {
    for (int i = 0; i < fileNum; ++i) {
        for (int j = 0; j < filesNodes[i].cnt; ++j) {
            free(filesNodes[i].nodes[j]);
        }
        free(filesNodes[i].nodes);
    }
}

FilesNodes initFileNodes(){
    FilesNodes fileNodes;
    fileNodes.nodes = malloc(1024 * 8 * sizeof(FilesNodes *));
    fileNodes.cnt = 0;
    return fileNodes;
}

char *NodeAsString(Node *node) {
    if (node == NULL) {
        return "NULL";
    }
    if (node->value == NULL || strlen(node->value) == 0) {
        char *leftSide = NodeAsString(node->left);
        char *rightSide = NodeAsString(node->right);
        char *result = malloc(strlen(node->nameNode) + strlen(leftSide) + strlen(rightSide) + 5);
        sprintf(result, "%s(%s, %s)", node->nameNode, leftSide, rightSide);
        return result;
    }
    return node->value;
}

Node *createNode(char *nameNode, Node *left, Node *right, char *value) {
    Node *node = malloc(sizeof(Node));
    node->nameNode = nameNode;
    node->left = left;
    node->right = right;
    char *val_buf = malloc(1024 * sizeof(char));
    if (value == NULL || strlen(value) == 0) {
        val_buf = NodeAsString(node);
    } else {
        val_buf = malloc(strlen(value) + 1);
        strcpy(val_buf, value);
    }
    node->value = val_buf;
    filesNodes[fileNum].nodes[filesNodes[fileNum].cnt] = node;
    filesNodes[fileNum].cnt++;
    return node;
}



