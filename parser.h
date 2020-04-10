/****************************************
 * Filename: Parser.h
 * Compiler: MS Visual Studio 2019
 * Author: Aria Gomes, Nicholas King
 * Course: CST-8152 - Compilers 013
 * Assignment: 3 - Parser
 * Date: April 6th 2020
 * Professor: Svillan Ranev
 * Purpose: All of the header files and variables required for parser.c
 * Function list:
 *					parser();
 *                  match();
 *                  syn_eh();
 *                  syn_printe();
 *                  gen_incode();
 *                  void program(void);
 *				    void opt_statements(void);
 *					void statements_prime(void);
 *					void statements(void);
 *                  void statement(void);
 *					void assignment_statement(void);
 *					void assignment_expression(void);
 *					void selection_statement(void);
 *					void iteration_statement(void);
 *					void pre_condition(void);
 *					void input_statement(void);
 *					void variable_list(void);
 *					void variable_list_prime(void);
 *					void output_statement(void);
 *					void output_list(void);
 *					void variable_identifier(void);
 * 					void arithmetic_expression(void);
 * 					void unary_arithmetic_expression(void);
 *					void additive_arithmetic_expression(void);
 *					void additive_arithmetic_expression_prime(void);
 *					void multiplicative_arithmetic_expression(void);
 *					void multiplicative_arithmetic_expression_prime(void);
 *					void primary_arithmetic_expression(void);
 *					void string_expression(void);
 *					void string_expression_prime(void);
 *					void primary_string_expression(void);
 *					void logical_OR_expression(void);
 *					void logical_OR_expression_prime(void);
 *					void logical_AND_expression(void);
 *					void logical_AND_expression_prime(void);
 *					void relational_expression(void);
 *					void primary_arelational_expression_prime(void);
 *					void primary_srelational_expression_prime(void);
 *					void primary_arelational_expression(void);
 *					void primary_srelational_expression(void);
 ***************************************/
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   /* standard input / output */
#include <ctype.h>   /* conversion functions */
#include <stdlib.h>  /* standard library functions and constants */
#include <string.h>  /* string functions */
#include <limits.h>  /* integer types constants */
#include <float.h>   /* floating-point types constants */
#include "buffer.h"
#include "token.h"


#define ELSE 0
#define FALSE 1
#define IF 2
#define PLATYPUS 3
#define READ 4
#define REPEAT 5
#define THEN 6
#define TRUE 7
#define WHILE 8
#define WRITE 9

#define NO_ATTR -1
static Token lookahead;                                  /* lookahead Token */
extern int line;                                         /* external line number counter declaration */
extern Buffer* str_LTBL;                                 /* external string table buffer pointer declaration */
extern char* kw_table[];                                 /* external keyword table string declaration */
int synerrno;                                            /* Error Number */               


extern Token malar_next_token(void);                     /* external scanner declaration */
void parser(void);                                       /* creates a Buffer structure and sets values with given parameters */
void match(int pr_token_code, int pr_token_attribute);   /* matches the current input token (lookahead) and the token required by the parser */
void syn_eh(int sync_token_code);                        /* implements a simple panic mode error recovery */
void syn_printe(void);                                   /* prints error messages */
void gen_incode(char*);                                  /* assignment the function takes a string as an argument and prints it */

void program(void);                                     /* parses program */
void opt_statements(void);                              /* parses optional statements */
void statements_prime(void);                            /* parses statements prime */
void statements(void);                                  /* parses statements */
void statement(void);                                   /* parses statement */
void assignment_statement(void);                        /* parses assignment statement */
void assignment_expression(void);                       /* parses assignment expression */
void selection_statement(void);                         /* parses selection statement */
void iteration_statement(void);                         /* parses iteration statement */
void pre_condition(void);                               /* parses conditional statements */
void input_statement(void);                             /* parses input statement */
void variable_list(void);                               /* parses variable list */
void variable_list_prime(void);                         /* parses variable list prime */
void output_statement(void);                            /* parses output statement */
void output_list(void);                                 /* parses output list */
void variable_identifier(void);                         /* parses variable identifier */
void arithmetic_expression(void);                       /* parses arithmetic expression */
void unary_arithmetic_expression(void);                 /* parses uniry arithmetic expression */
void additive_arithmetic_expression(void);              /* parses additive arithmetic expression */
void additive_arithmetic_expression_prime(void);        /* parses additive arithmetic expression prime */
void multiplicative_arithmetic_expression(void);        /* parses multiplicative arithmetic expression */
void multiplicative_arithmetic_expression_prime(void);  /* parses multiplicative arithmetic expression prime */
void primary_arithmetic_expression(void);               /* parses primary arithmetic expression */
void string_expression(void);                           /* parses string expression */
void string_expression_prime(void);                     /* parses string expression prime */
void primary_string_expression(void);                   /* parses primary string expression */
void logical_OR_expression(void);                       /* parses logical OR expression */
void logical_OR_expression_prime(void);                 /* parses logical OR expression prime */
void logical_AND_expression(void);                      /* parses logical AND expression */
void logical_AND_expression_prime(void);                /* parses logical AND expression prime */
void relational_expression(void);                       /* parses relational expression */
void primary_arelational_expression_prime(void);        /* parses primary a relational expression prime */
void primary_srelational_expression_prime(void);        /* parses primary s relational expression prime */
void primary_arelational_expression(void);              /* parses primary a relational expression */
void primary_srelational_expression(void);              /* parses primary s relational expression */