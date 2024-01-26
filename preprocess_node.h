#ifndef LAB1_PREPROCESS_AST_H
#define LAB1_PREPROCESS_AST_H

#include "node.h"

typedef struct preparedStatement preparedStatement;
typedef struct preparedUnary preparedUnary;
typedef struct preparedExpression preparedExpression;
typedef struct preparedBlock preparedBlock;
typedef struct preparedBinary preparedBinary;
typedef struct preparedCall preparedCall;
typedef struct preparedIndexer preparedIndexer;
typedef struct expressionsList expressionsList;
typedef struct preparedLiteral preparedLiteral;
typedef struct preparedType preparedType;
typedef struct conditionalStatement conditionalStatement;
typedef struct preparedIf preparedIf;
typedef struct preparedWhile preparedWhile;
typedef struct preparedDoWhile preparedDoWhile;
typedef struct preparedVars preparedVars;
typedef struct preparedVar preparedVar;
typedef struct preparedFunc preparedFunc;
typedef struct preparedAssigment preparedAssigment;

typedef enum statementType statementType;
typedef enum expressionType expressionType;
typedef enum binaryType binaryType;
typedef enum unaryType unaryType;
typedef enum primitiveType primitiveType;
typedef enum BOOLEAN BOOLEAN;


enum primitiveType {
    CHARACTER, INT, BOOL, VOID, CUSTOM, FUNC, RESERVED
};

const char *primitiveType_toString(primitiveType type);

struct preparedType {
    primitiveType type;
    char *customTypeIdentifier;
    int arrayDem;
    Node *node;
};
enum BOOLEAN {
    BOOLEAN_TRUE,
    BOOLEAN_FALSE
};
struct preparedLiteral {
    preparedType type;
    char c_value;
    int i_value;
    char *s_value;
    BOOLEAN b_value;
    Node *node;
};
struct preparedVar {
    preparedType type;
    char *identifier;
    preparedExpression *initValue;
    int isInitValueExists;
    Node *node;

    // for function args
    char *label;
};
struct expressionsList {
    preparedExpression *expressions;
    int expressionsCount;
    Node *node;
};
struct preparedCall {
    char *procedureName;
    expressionsList argumentExpressions;
    Node *node;
};
struct preparedIndexer {
    preparedExpression *expression;
    expressionsList indexExpressions;
    Node *node;
};

enum binaryType {
    BINARY_TYPE_PLUS,
    BINARY_TYPE_MINUS,
    BINARY_TYPE_STAR,
    BINARY_TYPE_SLASH,
    BINARY_TYPE_PERCENT,
    BINARY_TYPE_EQUAL,
    BINARY_TYPE_NOTEQUAL,
    BINARY_TYPE_LESSTHAN,
    BINARY_TYPE_GREATERTHAN,
    BINARY_TYPE_LESSTHANEQ,
    BINARY_TYPE_GREATERTHANEQ,
    BINARY_TYPE_AND,
    BINARY_TYPE_OR,
};
struct preparedBinary {
    binaryType type;
    preparedExpression *leftOperand;
    preparedExpression *rightOperand;
    Node *node;
};
enum unaryType {
    UNARY_TYPE_MINUS,
    UNARY_TYPE_NOT
};
struct preparedUnary {
    unaryType type;
    preparedExpression *operand;
    Node *node;
};
enum expressionType {
    UNARY,
    BINARY,
    BRACES,
    CALL,
    INDEXER,
    PLACE,
    LITERAL
};

struct preparedExpression {
    expressionType type;

    union {
        preparedUnary unary;
        preparedBinary binary;
        preparedExpression *expression;
        preparedCall call;
        preparedIndexer indexer;
        preparedLiteral literal;
        char *identifier;
    };
    Node *node;
};
enum statementType {
    STATEMENT_TYPE_BLOCK,
    STATEMENT_TYPE_VAR,
    STATEMENT_TYPE_IF,
    STATEMENT_TYPE_WHILE,
    STATEMENT_TYPE_DO_WHILE,
    STATEMENT_TYPE_BREAK,
    STATEMENT_TYPE_EXPRESSION,
    STATEMENT_TYPE_ASSIGMENT,
    STATEMENT_TYPE_RETURN,
};
struct preparedBlock {
    preparedStatement *statements;
    int statementsCount;
    Node *node;
};
struct preparedVars {
    preparedVar *vars;
    int count;
    Node *node;
};
struct preparedWhile {
    preparedExpression condition;
    preparedBlock block;
    Node *node;
};
struct preparedDoWhile {
    preparedExpression condition;
    preparedBlock block;
    Node *node;
};
struct preparedAssigment {
    preparedExpression to;
    preparedExpression *rightPart;
    Node *node;
};
struct preparedStatement {
    statementType type;
    union {
        preparedBlock block;
        preparedExpression expression;
        preparedIf *ifp;
        preparedVars vars;
        preparedWhile whilep;
        preparedDoWhile dowhile;
        preparedAssigment assigment;
    };
    Node *node;
};


struct preparedFunc {
    char *identifier;
    preparedVars args;
    preparedType returnType;
    preparedBlock body;
    int seen;
    Node *node;
};
struct conditionalStatement {
    preparedExpression condition;
    preparedStatement statement;
    Node *node;
};
struct preparedIf {
    conditionalStatement statement;
    preparedStatement elseStatement;
    int elseStatementExists;
    Node *node;
};


preparedBlock prepareBlock(Node *body);

preparedExpression *prepareExpression(Node *node);

preparedStatement prepareStatement(Node *node);

preparedFunc prepareProcedure(Node *procedure);

preparedFunc *prepareProcedures(FilesNodes allProcedures);


#endif //LAB1_PREPROCESS_AST_H
