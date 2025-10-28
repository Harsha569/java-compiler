%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylineno;
extern FILE *yyin;
void yyerror(const char *s);

int parse_success = 1;
%}

%union {
    int num;
    float flt;
    char ch;
    char *str;
}

%token ABSTRACT CLASS INTERFACE EXTENDS IMPLEMENTS
%token PUBLIC PRIVATE PROTECTED STATIC FINAL
%token VOID INT FLOAT DOUBLE CHAR BOOLEAN STRING
%token IF ELSE WHILE FOR DO SWITCH CASE DEFAULT BREAK CONTINUE RETURN
%token NEW THIS SUPER NULL_LITERAL TRUE FALSE
%token PRINTLN PRINT

%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET
%token SEMICOLON COMMA DOT COLON

%token ASSIGN PLUS_ASSIGN MINUS_ASSIGN MULT_ASSIGN DIV_ASSIGN
%token PLUS MINUS MULTIPLY DIVIDE MODULO INCREMENT DECREMENT
%token EQ NE LT LE GT GE
%token AND OR NOT
%token BITWISE_AND BITWISE_OR BITWISE_XOR BITWISE_NOT LEFT_SHIFT RIGHT_SHIFT

%token <str> IDENTIFIER STRING_LITERAL
%token <num> NUMBER
%token <flt> FLOAT_LITERAL
%token <ch> CHAR_LITERAL

%type <str> type

%left OR
%left AND
%left BITWISE_OR
%left BITWISE_XOR
%left BITWISE_AND
%left EQ NE
%left LT LE GT GE
%left LEFT_SHIFT RIGHT_SHIFT
%left PLUS MINUS
%left MULTIPLY DIVIDE MODULO
%right NOT BITWISE_NOT INCREMENT DECREMENT
%left DOT LBRACKET

%%

program:
    compilation_unit_list
    {
        if (parse_success) {
            printf("\n✓ Java program parsed successfully!\n");
        }
    }
    ;

compilation_unit_list:
    compilation_unit
    | compilation_unit_list compilation_unit
    ;

compilation_unit:
    class_declaration
    | interface_declaration
    ;

/* ==================== CLASS DECLARATIONS ==================== */

class_declaration:
    modifiers CLASS IDENTIFIER extends_clause implements_clause LBRACE class_body_declarations RBRACE
    {
        printf("✓ Class '%s' parsed\n", $3);
        free($3);
    }
    | CLASS IDENTIFIER extends_clause implements_clause LBRACE class_body_declarations RBRACE
    {
        printf("✓ Class '%s' parsed\n", $2);
        free($2);
    }
    ;

interface_declaration:
    modifiers INTERFACE IDENTIFIER extends_interfaces LBRACE interface_body_declarations RBRACE
    {
        printf("✓ Interface '%s' parsed\n", $3);
        free($3);
    }
    | INTERFACE IDENTIFIER extends_interfaces LBRACE interface_body_declarations RBRACE
    {
        printf("✓ Interface '%s' parsed\n", $2);
        free($2);
    }
    ;

extends_clause:
    /* empty */
    | EXTENDS IDENTIFIER { free($2); }
    ;

implements_clause:
    /* empty */
    | IMPLEMENTS type_list
    ;

extends_interfaces:
    /* empty */
    | EXTENDS type_list
    ;

type_list:
    IDENTIFIER { free($1); }
    | type_list COMMA IDENTIFIER { free($3); }
    ;

modifiers:
    modifier
    | modifiers modifier
    ;

modifier:
    PUBLIC | PRIVATE | PROTECTED | STATIC | FINAL | ABSTRACT
    ;

/* ==================== CLASS BODY ==================== */

class_body_declarations:
    /* empty */
    | class_body_declarations class_body_declaration
    ;

class_body_declaration:
    field_declaration
    | method_declaration
    ;

/* ==================== FIELD DECLARATIONS ==================== */

field_declaration:
    modifiers type IDENTIFIER SEMICOLON
    {
        printf("  - Field: %s %s\n", $2, $3);
        free($2); free($3);
    }
    | modifiers type IDENTIFIER ASSIGN expression SEMICOLON
    {
        printf("  - Field: %s %s = ...\n", $2, $3);
        free($2); free($3);
    }
    | type IDENTIFIER SEMICOLON
    {
        printf("  - Field: %s %s\n", $1, $2);
        free($1); free($2);
    }
    | type IDENTIFIER ASSIGN expression SEMICOLON
    {
        printf("  - Field: %s %s = ...\n", $1, $2);
        free($1); free($2);
    }
    ;

/* ==================== INTERFACE BODY ==================== */

interface_body_declarations:
    /* empty */
    | interface_body_declarations interface_body_declaration
    ;

interface_body_declaration:
    type IDENTIFIER LPAREN formal_parameter_list RPAREN SEMICOLON
    {
        printf("  - Method signature: %s %s(...)\n", $1, $2);
        free($1); free($2);
    }
    | type IDENTIFIER LPAREN RPAREN SEMICOLON
    {
        printf("  - Method signature: %s %s()\n", $1, $2);
        free($1); free($2);
    }
    | VOID IDENTIFIER LPAREN formal_parameter_list RPAREN SEMICOLON
    {
        printf("  - Method signature: void %s(...)\n", $2);
        free($2);
    }
    | VOID IDENTIFIER LPAREN RPAREN SEMICOLON
    {
        printf("  - Method signature: void %s()\n", $2);
        free($2);
    }
    ;

/* ==================== METHOD DECLARATIONS ==================== */

method_declaration:
    modifiers type IDENTIFIER LPAREN formal_parameter_list RPAREN method_body
    {
        printf("  - Method: %s %s(...)\n", $2, $3);
        free($2); free($3);
    }
    | modifiers type IDENTIFIER LPAREN RPAREN method_body
    {
        printf("  - Method: %s %s()\n", $2, $3);
        free($2); free($3);
    }
    | modifiers VOID IDENTIFIER LPAREN formal_parameter_list RPAREN method_body
    {
        printf("  - Method: void %s(...)\n", $3);
        free($3);
    }
    | modifiers VOID IDENTIFIER LPAREN RPAREN method_body
    {
        printf("  - Method: void %s()\n", $3);
        free($3);
    }
    | type IDENTIFIER LPAREN formal_parameter_list RPAREN method_body
    {
        printf("  - Method: %s %s(...)\n", $1, $2);
        free($1); free($2);
    }
    | type IDENTIFIER LPAREN RPAREN method_body
    {
        printf("  - Method: %s %s()\n", $1, $2);
        free($1); free($2);
    }
    | VOID IDENTIFIER LPAREN formal_parameter_list RPAREN method_body
    {
        printf("  - Method: void %s(...)\n", $2);
        free($2);
    }
    | VOID IDENTIFIER LPAREN RPAREN method_body
    {
        printf("  - Method: void %s()\n", $2);
        free($2);
    }
    | PUBLIC IDENTIFIER LPAREN formal_parameter_list RPAREN method_body
    {
        printf("  - Constructor: %s(...)\n", $2);
        free($2);
    }
    | PUBLIC IDENTIFIER LPAREN RPAREN method_body
    {
        printf("  - Constructor: %s()\n", $2);
        free($2);
    }
    | PRIVATE IDENTIFIER LPAREN formal_parameter_list RPAREN method_body
    {
        printf("  - Constructor: %s(...)\n", $2);
        free($2);
    }
    | PRIVATE IDENTIFIER LPAREN RPAREN method_body
    {
        printf("  - Constructor: %s()\n", $2);
        free($2);
    }
    | PROTECTED IDENTIFIER LPAREN formal_parameter_list RPAREN method_body
    {
        printf("  - Constructor: %s(...)\n", $2);
        free($2);
    }
    | PROTECTED IDENTIFIER LPAREN RPAREN method_body
    {
        printf("  - Constructor: %s()\n", $2);
        free($2);
    }
    | IDENTIFIER LPAREN formal_parameter_list RPAREN method_body
    {
        printf("  - Constructor: %s(...)\n", $1);
        free($1);
    }
    | IDENTIFIER LPAREN RPAREN method_body
    {
        printf("  - Constructor: %s()\n", $1);
        free($1);
    }
    ;

method_body:
    SEMICOLON
    | block
    ;

formal_parameter_list:
    formal_parameter
    | formal_parameter_list COMMA formal_parameter
    ;

formal_parameter:
    type IDENTIFIER { free($1); free($2); }
    | type LBRACKET RBRACKET IDENTIFIER { free($1); free($4); }
    ;

/* ==================== TYPES ==================== */

type:
    INT { $$ = strdup("int"); }
    | FLOAT { $$ = strdup("float"); }
    | DOUBLE { $$ = strdup("double"); }
    | CHAR { $$ = strdup("char"); }
    | BOOLEAN { $$ = strdup("boolean"); }
    | STRING { $$ = strdup("String"); }
    | IDENTIFIER { $$ = $1; }
    | type LBRACKET RBRACKET { $$ = $1; }
    ;

/* ==================== STATEMENTS ==================== */

block:
    LBRACE block_statements RBRACE
    ;

block_statements:
    /* empty */
    | block_statements block_statement
    ;

block_statement:
    local_variable_declaration
    | statement
    ;

local_variable_declaration:
    type IDENTIFIER SEMICOLON
    {
        printf("    Variable: %s %s\n", $1, $2);
        free($1); free($2);
    }
    | type IDENTIFIER ASSIGN expression SEMICOLON
    {
        printf("    Variable: %s %s = ...\n", $1, $2);
        free($1); free($2);
    }
    | type LBRACKET RBRACKET IDENTIFIER ASSIGN NEW type LBRACKET expression RBRACKET SEMICOLON
    {
        printf("    Array: %s[] %s = new %s[...]\n", $1, $4, $7);
        free($1); free($4); free($7);
    }
    ;

statement:
    block
    | SEMICOLON
    | expression_statement
    | if_statement
    | while_statement
    | for_statement
    | do_statement
    | switch_statement
    | break_statement
    | continue_statement
    | return_statement
    | print_statement
    ;

expression_statement:
    statement_expression SEMICOLON
    ;

statement_expression:
    assignment
    | method_invocation
    | class_instance_creation
    ;

if_statement:
    IF LPAREN expression RPAREN statement
    {
        printf("    If statement\n");
    }
    | IF LPAREN expression RPAREN statement ELSE statement
    {
        printf("    If-else statement\n");
    }
    ;

while_statement:
    WHILE LPAREN expression RPAREN statement
    {
        printf("    While loop\n");
    }
    ;

for_statement:
    FOR LPAREN for_init SEMICOLON for_condition SEMICOLON for_update RPAREN statement
    {
        printf("    For loop\n");
    }
    ;

for_init:
    /* empty */
    | type IDENTIFIER ASSIGN expression { free($1); free($2); }
    | statement_expression
    ;

for_condition:
    /* empty */
    | expression
    ;

for_update:
    /* empty */
    | statement_expression
    ;

do_statement:
    DO statement WHILE LPAREN expression RPAREN SEMICOLON
    {
        printf("    Do-while loop\n");
    }
    ;

switch_statement:
    SWITCH LPAREN expression RPAREN LBRACE switch_block_statement_groups RBRACE
    {
        printf("    Switch statement\n");
    }
    ;

switch_block_statement_groups:
    /* empty */
    | switch_block_statement_groups switch_block_statement_group
    ;

switch_block_statement_group:
    switch_labels block_statements
    ;

switch_labels:
    switch_label
    | switch_labels switch_label
    ;

switch_label:
    CASE expression COLON
    {
        printf("      Case label\n");
    }
    | DEFAULT COLON
    {
        printf("      Default label\n");
    }
    ;

break_statement:
    BREAK SEMICOLON
    {
        printf("    Break\n");
    }
    ;

continue_statement:
    CONTINUE SEMICOLON
    {
        printf("    Continue\n");
    }
    ;

return_statement:
    RETURN SEMICOLON
    {
        printf("    Return\n");
    }
    | RETURN expression SEMICOLON
    {
        printf("    Return value\n");
    }
    ;

print_statement:
    PRINTLN LPAREN expression RPAREN SEMICOLON
    {
        printf("    System.out.println(...)\n");
    }
    | PRINT LPAREN expression RPAREN SEMICOLON
    {
        printf("    System.out.print(...)\n");
    }
    ;

/* ==================== EXPRESSIONS ==================== */

expression:
    assignment
    | conditional_expression
    ;

assignment:
    IDENTIFIER ASSIGN expression { free($1); }
    | IDENTIFIER PLUS_ASSIGN expression { free($1); }
    | IDENTIFIER MINUS_ASSIGN expression { free($1); }
    | IDENTIFIER MULT_ASSIGN expression { free($1); }
    | IDENTIFIER DIV_ASSIGN expression { free($1); }
    | IDENTIFIER LBRACKET expression RBRACKET ASSIGN expression { free($1); }
    | IDENTIFIER DOT IDENTIFIER ASSIGN expression { free($1); free($3); }
    ;

conditional_expression:
    logical_or_expression
    ;

logical_or_expression:
    logical_and_expression
    | logical_or_expression OR logical_and_expression
    ;

logical_and_expression:
    bitwise_or_expression
    | logical_and_expression AND bitwise_or_expression
    ;

bitwise_or_expression:
    bitwise_xor_expression
    | bitwise_or_expression BITWISE_OR bitwise_xor_expression
    ;

bitwise_xor_expression:
    bitwise_and_expression
    | bitwise_xor_expression BITWISE_XOR bitwise_and_expression
    ;

bitwise_and_expression:
    equality_expression
    | bitwise_and_expression BITWISE_AND equality_expression
    ;

equality_expression:
    relational_expression
    | equality_expression EQ relational_expression
    | equality_expression NE relational_expression
    ;

relational_expression:
    shift_expression
    | relational_expression LT shift_expression
    | relational_expression GT shift_expression
    | relational_expression LE shift_expression
    | relational_expression GE shift_expression
    ;

shift_expression:
    additive_expression
    | shift_expression LEFT_SHIFT additive_expression
    | shift_expression RIGHT_SHIFT additive_expression
    ;

additive_expression:
    multiplicative_expression
    | additive_expression PLUS multiplicative_expression
    | additive_expression MINUS multiplicative_expression
    ;

multiplicative_expression:
    unary_expression
    | multiplicative_expression MULTIPLY unary_expression
    | multiplicative_expression DIVIDE unary_expression
    | multiplicative_expression MODULO unary_expression
    ;

unary_expression:
    postfix_expression
    | INCREMENT unary_expression
    | DECREMENT unary_expression
    | PLUS unary_expression
    | MINUS unary_expression
    | NOT unary_expression
    | BITWISE_NOT unary_expression
    ;

postfix_expression:
    primary
    | IDENTIFIER INCREMENT { free($1); }
    | IDENTIFIER DECREMENT { free($1); }
    | IDENTIFIER LBRACKET expression RBRACKET { free($1); }
    | IDENTIFIER DOT IDENTIFIER { free($1); free($3); }
    | method_invocation
    ;

primary:
    literal
    | THIS
    | SUPER
    | LPAREN expression RPAREN
    | class_instance_creation
    | IDENTIFIER { free($1); }
    ;

literal:
    NUMBER
    | FLOAT_LITERAL
    | CHAR_LITERAL
    | STRING_LITERAL { free($1); }
    | TRUE
    | FALSE
    | NULL_LITERAL
    ;

class_instance_creation:
    NEW IDENTIFIER LPAREN argument_list RPAREN { free($2); }
    | NEW IDENTIFIER LPAREN RPAREN { free($2); }
    | NEW type LBRACKET expression RBRACKET { free($2); }
    ;

method_invocation:
    IDENTIFIER LPAREN argument_list RPAREN { free($1); }
    | IDENTIFIER LPAREN RPAREN { free($1); }
    | IDENTIFIER DOT IDENTIFIER LPAREN argument_list RPAREN { free($1); free($3); }
    | IDENTIFIER DOT IDENTIFIER LPAREN RPAREN { free($1); free($3); }
    | SUPER LPAREN argument_list RPAREN
    | SUPER LPAREN RPAREN
    ;

argument_list:
    expression
    | argument_list COMMA expression
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "✗ Parse error at line %d: %s\n", yylineno, s);
    parse_success = 0;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <filename.java>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    yyin = file;
    printf("\n========================================\n");
    printf("  Java Compiler - Parsing: %s\n", argv[1]);
    printf("========================================\n\n");

    int result = yyparse();
    fclose(file);

    if (result == 0 && parse_success) {
        printf("\n========================================\n");
        printf("  ✓ COMPILATION SUCCESSFUL\n");
        printf("========================================\n");
        return 0;
    } else {
        printf("\n========================================\n");
        printf("  ✗ COMPILATION FAILED\n");
        printf("========================================\n");
        return 1;
    }
}