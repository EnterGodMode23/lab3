%{
#include "error.h"
#include "lab_1.tab.h"
#include <string.h>
%}

%%
"+"             { return PLUS; };
"-"             { return MINUS; };
"*"             { return TIMES; };
"/"             { return DIVIDE; };
"%"             {return PERCENT;};
";"             {return SEMICOLON;};
","             {return COMMA;};
"!="            {return NOT_EQUAL;};
"!"             {return NOT;};
"\|\|"          {return OR;};
"&&"            {return AND;};
"("             { return LPAREN; };
")"             { return RPAREN; };
"{"             { return LBRACE; };
"}"             { return RBRACE; };
"["             { return LBRACKET; };
"]"             { return RBRACKET; };
"="             { return ASSIGN; };
"=="            { return EQUAL; };
"<="            {return LESS_EQUAL;};
">="            {return GREATER_EQUAL;};
"<"             {return LESS;};
">"             {return GREATER;};
"if"            { yylval.node = createNode("IF", NULL, NULL, ""); return IF; };
"else"          { yylval.node = createNode("ELSE", NULL, NULL, ""); return ELSE; };
"while"         { yylval.node = createNode("WHILE", NULL, NULL, ""); return WHILE; };
"do"            { yylval.node = createNode("DO", NULL, NULL, ""); return DO; };
"break"         { yylval.node = createNode("BREAK", NULL, NULL, ""); return BREAK; };
"bool"          { yylval.node = createNode("BOOL", NULL, NULL, yytext); return TYPEDEF; };
"byte"          { yylval.node = createNode("BYTE", NULL, NULL, yytext); return TYPEDEF; };
"int"           { yylval.node = createNode("INT", NULL, NULL, yytext); return TYPEDEF; };
"uint"          { yylval.node = createNode("UINT", NULL, NULL, yytext); return TYPEDEF; };
"long"          { yylval.node = createNode("LONG", NULL, NULL, yytext); return TYPEDEF; };
"ulong"         { yylval.node = createNode("ULONG", NULL, NULL, yytext); return TYPEDEF; };
"char"          { yylval.node = createNode("CHAR", NULL, NULL, yytext); return TYPEDEF; };
"string"        { yylval.node = createNode("STRING", NULL, NULL, yytext); return TYPEDEF; };
"true"          { yylval.node = createNode("TRUE", NULL, NULL, ""); return TRUE; };
"false"         { yylval.node = createNode("FALSE", NULL, NULL, ""); return FALSE; };
"void"          { yylval.node = createNode("TYPEDEF", NULL, NULL, yytext); return TYPEDEF;};
"return"        {return RETURN;};
0[bB][01]+ {
    char* buffer = malloc(256);
    sprintf(buffer, "%ld", strtol(yytext + 2, NULL, 2));
    yylval.node = createNode("BIN", NULL, NULL, buffer);
    return BIN;
};
0[xX][0-9A-Fa-f]+ {
    char* buffer = malloc(256);
    sprintf(buffer, "%ld", strtol(yytext + 2, NULL, 16));
    yylval.node = createNode("HEX", NULL, NULL, buffer);
    return HEX;
};
\[,*\]          {yylval.node = createNode("ARRAY", NULL, NULL, yytext); return ARRAY_COMMAS;};
[a-zA-Z_][a-zA-Z0-9_]* { yylval.node = createNode("IDENTIFIER", NULL, NULL, yytext); return IDENTIFIER; };
[0-9]+          { yylval.node = createNode("INTEGER", NULL, NULL, yytext); return INTEGER; };
"'"[^\n']*"'"   {
                    char buffer[2];
                    strncpy(buffer, yytext+1, 1);
                    buffer[1] = '\0';
                    yylval.node = createNode("CHAR_LITERAL", NULL, NULL, buffer);
                    return CHAR;
                };
\"[^\"\n]*\"    {
                    char buffer[1025]; // Increased buffer size
                    strncpy(buffer, yytext+1, strlen(yytext)-2);
                    buffer[strlen(yytext)-2] = '\0'; // Null-terminate the string
                    yylval.node = createNode("STRING_LITERAL", NULL, NULL, buffer);
                    return STRING;
                 };
[ \t\n\r\f]+    ; // Пропуск пробелов и переводов строк
\/\/.*          ; // Пропустить комментарии
.               printf("unexpected character\n");

%%

int yywrap() {
    return 1;
}
