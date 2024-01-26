#ifndef LAB_1_AST_H
#define LAB_1_AST_H

#define funcSignature "funcSignature"
#define sourceItem "sourceItem"

#define maxNodesInList 1024


typedef struct Node Node;
typedef struct FilesNodes FilesNodes;

struct FilesNodes {
    Node **nodes;
    int cnt;
};

struct Node {
    int node_id;
    char *nameNode;
    Node *left;
    Node *right;
    char *value;
};

void destroy();

Node *createNode(char *nameNode, Node *left, Node *right, char *value);

FilesNodes initFileNodes();


#endif //LAB_1_AST_H
