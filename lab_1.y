%{
#include "lab_1.tab.h"
#include "error.h"
%}

%union {
    Node* node;
}

%token <node> PLUS MINUS TIMES DIVIDE PERCENT
%nonassoc <node> EQUAL NOT_EQUAL LESS GREATER LESS_EQUAL GREATER_EQUAL
%nonassoc <node> ASSIGN
%token <node> AND OR NOT
%token <node> IDENTIFIER
%token <node> STRING
%token <node> COMMA
%token <node> CHAR
%token <node> BIN HEX INTEGER
%token <node> TRUE FALSE
%token <node> IF ELSE WHILE DO BREAK
%token <node> SEMICOLON
%token <node> LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET
%token <node> TYPEDEF
%token <node> ARRAY_COMMAS
%type <node> expr
%type <node> typeRef
%token <node> RETURN


%type <node> funcSignature
%type <node> argDef
%type <node> sourceItem
%type <node> statement
%type <node> var
%type <node> if
%type <node> block
%type <node> while
%type <node> do
%type <node> break
%type <node> expression
%type <node> builtin
%type <node> custom
%type <node> array
%type <node> source
%type <node> listArgDef
%type <node> optionalTypeRef
%type <node> literal
%type <node> place
%type <node> indexer
%type <node> listExpr
%type <node> optionalListExpr
%type <node> call
%type <node> braces
%type <node> unary
%type <node> binary
%type <node> assignment
%type <node> listVarDeclared
%type <node> optionalElseStatement
%type <node> listStatement
%type <node> listVarDeclaredItem
%type <node> return


%%
source: {{$$ = NULL;}}
    | source sourceItem {{$$ = createNode("source", $1, $2, "");}};

sourceItem: funcSignature block {{$$ = createNode("sourceItem", $1, $2, "");}}
    | funcSignature SEMICOLON {{$$ = createNode("sourceItem", $1, NULL, "");}};

/* FUNCSIGNATURE */

funcSignature: argDef LPAREN listArgDef RPAREN {{$$ = createNode("funcSignature", $1, $3, "");}};

listArgDef:  {{$$ = NULL;}}
    | argDef {{$$ = $1;}}
    | argDef COMMA listArgDef {{$$ = createNode("listArgDef", $1, $3, "");}};

argDef: optionalTypeRef IDENTIFIER {{$$ = createNode("argDef", $1, $2, "");}};

optionalTypeRef: {{ $$ = NULL; }}
    | typeRef {{$$ = $1;}};

/* TypeRef */
typeRef: builtin {{$$ = $1;}}
    | custom {{$$ = $1;}}
    | array {{$$ = $1;}};

builtin: TYPEDEF {{$$ = $1;}};

/* Statement */
statement: var {{$$ =  $1;}}
    | if {{$$ =  $1;}}
    | block {{$$ =  $1;}}
    | while {{$$ =  $1;}}
    | do {{$$ =  $1;}}
    | break {{$$ =  $1;}}
    | expression {{$$ =  $1;}}
    | return;

return: RETURN SEMICOLON {{$$=createNode("return", NULL, NULL, $2->value);}}
    |RETURN expression {{$$=createNode("return", $2, NULL, $2->value);}};

custom: IDENTIFIER {{$$ = $1;}};

array: typeRef ARRAY_COMMAS {{$$ = createNode("array", $1, NULL, $2->value);}};


listVarDeclared: listVarDeclaredItem COMMA listVarDeclared {{$$ = createNode("listVarDeclared", $1, $3, "");}}
    | listVarDeclaredItem {{$$ = createNode("listVarDeclared", $1, NULL, "");}};

listVarDeclaredItem: IDENTIFIER {{$$ = $1;}}
    | assignment {{$$ = $1;}};

var: typeRef listVarDeclared SEMICOLON {{$$ = createNode("var", $1, $2, "");}};

if: IF LPAREN expr RPAREN statement optionalElseStatement {{$$ = createNode("if", $3, createNode("ifStatements", $5, $6, ""), "");}};

optionalElseStatement: ELSE statement optionalElseStatement {{$$ = createNode("else", $2, $3, "");}}
    | ELSE statement {{$$ = createNode("else", $2, NULL, "");}}
    | {{$$ = NULL;}};

listStatement: statement listStatement {{$$ = createNode("listStatement", $1, $2, "");}}
    | {{$$ = NULL;}};

block: LBRACE listStatement RBRACE {{$$ = createNode("block", $2, NULL, "");}}
    | LBRACE RBRACE {{$$ = createNode("block", NULL, NULL, "");}};

while: WHILE LPAREN expr RPAREN statement {{$$ = createNode("while", $3, $5, "");}};

do: DO block WHILE LPAREN expr RPAREN SEMICOLON {{$$ = createNode("dowhile", $2, $5, "");}};

break: BREAK SEMICOLON {{$$ = createNode("break", NULL, NULL, "");}};

expression: expr SEMICOLON {{$$ = $1;}};

assignment: expr EQUAL expr {{$$ = createNode("assigment", $1, $3, "");}};

expr: unary    {{$$ = $1;}}
    | binary   {{$$ = $1;}}
    | braces   {{$$ = $1;}}
    | call     {{$$ = $1;}}
    | indexer  {{$$ = $1;}}
    | place    {{$$ = $1;}}
    | literal  {{$$ = $1;}};

binary: assignment
    | expr PLUS expr {{$$ = createNode("PLUS", $1, $3, "");}}
    | expr ASSIGN expr {{$$ = createNode("ASSIGN", $1, $3, "");}}
    | expr MINUS expr {{$$ = createNode("MINUS", $1, $3, "");}}
    | expr TIMES expr {{$$ = createNode("TIMES", $1, $3, "");}}
    | expr DIVIDE expr {{$$ = createNode("DIVIDE", $1, $3, "");}}
    | expr PERCENT expr {{$$ = createNode("PERCENT", $1, $3, "");}}
    | expr EQUAL EQUAL expr {{$$ = createNode("EQUALITY", $1, $4, "");}}
    | expr NOT_EQUAL expr {{$$ = createNode("NOT_EQUAL", $1, $3, "");}}
    | expr LESS expr {{$$ = createNode("LESS", $1, $3, "");}}
    | expr GREATER expr {{$$ = createNode("GREATER", $1, $3, "");}}
    | expr LESS_EQUAL expr {{$$ = createNode("LESS_EQUAL", $1, $3, "");}}
    | expr GREATER_EQUAL expr {{$$ = createNode("GREATER_EQUAL", $1, $3, "");}}
    | expr AND expr {{$$ = createNode("AND", $1, $3, "");}}
    | expr OR expr {{$$ = createNode("OR", $1, $3, "");}};

unary: PLUS expr {{$$ = createNode("PLUS", $2, NULL, "");}}
    | MINUS expr {{$$ = createNode("MINUS", $2, NULL, "");}}
    | NOT expr {{$$ = createNode("NOT", $2, NULL, "");}};

braces: LPAREN expr RPAREN  {{$$ = createNode("braces", $2, NULL, "");}};

call: IDENTIFIER LPAREN optionalListExpr RPAREN  {{$$ = createNode("CALL", $1, $3, "");}};
optionalListExpr: listExpr  {{$$ = createNode("optionalListExpr", $1, NULL, "");}}
    | {{$$ = createNode("optionalListExpr", NULL, NULL, "");}};

listExpr: expr COMMA listExpr {{$$ = createNode("listExpr", $1, $3, "");}}
    | expr {{$$ = createNode("listExpr", $1, NULL, "");}};
indexer: expr LBRACKET listExpr RBRACKET {{$$ = createNode("indexer", $1, $3, "");}};

place: IDENTIFIER {{$$ = $1;}};

literal: TRUE {{$$ = $1;}}
    | FALSE {{$$ = $1;}}
    | STRING {{$$ = $1;}}
    | CHAR {{$$ = $1;}}
    | HEX {{$$ = $1;}}
    | BIN {{$$ = $1;}}
    | INTEGER {{$$ = $1;}};
%%
