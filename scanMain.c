/* The main driver routine to test the scanner */

#include <stdio.h>
#include "tiny.tab.h"

extern char * yytext;
extern int value;
extern int yylex();

yyerror (s)
     char *s;
{
  fprintf (stderr, "%s\n", s);
}

int main()
{ int token; int conta ;
 while ((token = yylex()) != 0) { // a 0 is returned if eof
   switch(token) { 

   case INT: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "INT", "");
     break;
   case FLOAT: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "FLOAT", "");
     break;
   case IF: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "IF", "");
     break;
   case FOR: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "FOR", "");
     break;
   case WHILE: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "WHILE","");
     break;
   case DO: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "DO","");
     break;  
   case OP_SOMA: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_SOMA", "");
     break;
   case OP_SUB: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_SUB", "");
     break;  
   case OP_MULT: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_MULT","");
     break;
   case OP_DIV: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_DIV", "");
     break;
   case OP_EXP: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_EXP", "");
     break;   
   case OP_ATRIB: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_ATRIB","");
     break;
   case PONTO_V: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "PONTO_V", "");
     break;
   case CHAVE_A: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "CHAVE_A", "");
     break;
   case CHAVE_F: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "CHAVE_F","");
     break;
   case APAR:
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "APAR", "");
     break;  
   case FPAR:
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "FPAR", "");
     break;   
   case ID:
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "ID", yytext);
     break;
   case NUM: 
     printf("lexeme = %s, token = %s, value = %d\n", yytext, "NUM", value);
     break;
   case COMENTARIO: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "COMENTARIO", "");
     break;  
   case COMENTARIO_LINHA: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "COMENTARIO_LINHA", "");
     break;
   case BOOL: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "BOOL", "");
     break;  
   case OP_AND: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_AND", "");
     break;
   case OP_OR: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_OR", "");
     break;   
   case OP_MENOR: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_MENOR", "");
     break;   
   case OP_MENOR_IGUAL: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_MENOR_IGUAL", "");
     break;
   case OP_MAIOR: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_MAIOR", "");
     break;
   case OP_MAIOR_IGUAL: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_MAIOR_IGUAL", "");
     break;   
   case OP_IGUAL: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_IGUAL", "");
     break;   
   case OP_DIFERENTE: 
     printf("lexeme = %s, token = %s, value = %s\n", yytext, "OP_DEFERENTE", "");
     break;  
   case ERROR:
     printf("lexeme = %s, token = %s, ERRO NA LINHA = %d\n", yytext, "ERROR",value);
     break; 
   }
 }
 return 0;
}

