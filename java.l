%{
#include <stdio.h>
#include <string.h>
#include "java.tab.h"
extern int yylineno;
%}

%option yylineno

%%

[ \t\r]+              { /* skip whitespace */ }
\n                    { /* skip newlines */ }

"abstract"            { return ABSTRACT; }
"class"               { return CLASS; }
"interface"           { return INTERFACE; }
"extends"             { return EXTENDS; }
"implements"          { return IMPLEMENTS; }
"public"              { return PUBLIC; }
"private"             { return PRIVATE; }
"protected"           { return PROTECTED; }
"static"              { return STATIC; }
"final"               { return FINAL; }
"void"                { return VOID; }
"int"                 { return INT; }
"float"               { return FLOAT; }
"double"              { return DOUBLE; }
"char"                { return CHAR; }
"boolean"             { return BOOLEAN; }
"String"              { return STRING; }
"if"                  { return IF; }
"else"                { return ELSE; }
"while"               { return WHILE; }
"for"                 { return FOR; }
"do"                  { return DO; }
"switch"              { return SWITCH; }
"case"                { return CASE; }
"default"             { return DEFAULT; }
"break"               { return BREAK; }
"continue"            { return CONTINUE; }
"return"              { return RETURN; }
"new"                 { return NEW; }
"this"                { return THIS; }
"super"               { return SUPER; }
"null"                { return NULL_LITERAL; }
"true"                { return TRUE; }
"false"               { return FALSE; }
"System.out.println"  { return PRINTLN; }
"System.out.print"    { return PRINT; }

[a-zA-Z_][a-zA-Z0-9_]* { yylval.str = strdup(yytext); return IDENTIFIER; }
[0-9]+                 { yylval.num = atoi(yytext); return NUMBER; }
[0-9]+\.[0-9]+         { yylval.flt = atof(yytext); return FLOAT_LITERAL; }

"("                   { return LPAREN; }
")"                   { return RPAREN; }
"{"                   { return LBRACE; }
"}"                   { return RBRACE; }
"["                   { return LBRACKET; }
"]"                   { return RBRACKET; }
";"                   { return SEMICOLON; }
","                   { return COMMA; }
"."                   { return DOT; }
":"                   { return COLON; }

"="                   { return ASSIGN; }
"+="                  { return PLUS_ASSIGN; }
"-="                  { return MINUS_ASSIGN; }
"*="                  { return MULT_ASSIGN; }
"/="                  { return DIV_ASSIGN; }

"+"                   { return PLUS; }
"-"                   { return MINUS; }
"*"                   { return MULTIPLY; }
"/"                   { return DIVIDE; }
"%"                   { return MODULO; }
"++"                  { return INCREMENT; }
"--"                  { return DECREMENT; }

"=="                  { return EQ; }
"!="                  { return NE; }
"<"                   { return LT; }
"<="                  { return LE; }
">"                   { return GT; }
">="                  { return GE; }

"&&"                  { return AND; }
"||"                  { return OR; }
"!"                   { return NOT; }

"&"                   { return BITWISE_AND; }
"|"                   { return BITWISE_OR; }
"^"                   { return BITWISE_XOR; }
"~"                   { return BITWISE_NOT; }
"<<"                  { return LEFT_SHIFT; }
">>"                  { return RIGHT_SHIFT; }

\"([^\\\"]|\\.)*\"    { yylval.str = strdup(yytext); return STRING_LITERAL; }
'([^\\']|\\.)'        { yylval.ch = yytext[1]; return CHAR_LITERAL; }

"//".*                { /* skip single-line comments */ }
"/*"([^*]|\*+[^*/])*\*+"/" { /* skip multi-line comments */ }

.                     { printf("Unknown character: %s at line %d\n", yytext, yylineno); }

%%

int yywrap() {
    return 1;
}