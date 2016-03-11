/* Scanner for Tiny--Lex/Flex specification */
%{

#include "tiny.tab.h"

int value;
int gLineNumber = 0;

%}

%option noyywrap
sinal     				([-+])?
digito                  [0-9]
digitos        			({digito})*
fracao          		(\.{digitos})?
expoente        		((E([+|-])?)?{digitos}+)?
numeral         		{sinal}{digitos}{fracao}{expoente}
tudo					(.|\n)*
letra					[a-zA-Z]
letras                  {letra}+
ident					(_|{letra})({letras}|{digitos}|_)*

comentario				\/\*{tudo}*\*\/
comentario_linha 		\/\/([^\n])*

%%
"int" 							{return INT;}
"float" 						{return FLOAT;}

"if"							{return IF;}
"for"							{return FOR;}
"while"							{return WHILE;}
"do"							{return DO;}

"and" 							{return OP_AND;}
"or" 							{return OP_OR;}


"<"								{return OP_MENOR;}
"<="							{return OP_MENOR_IGUAL;}
">"								{return OP_MAIOR;}
">="							{return OP_MAIOR_IGUAL;}
"=="							{return OP_IGUAL;}
"!="							{return OP_DIFERENTE;}

"true"      					{return BOOL;}
"false"     					{return BOOL;}

{comentario}					{return COMENTARIO;}
{comentario_linha}				{return COMENTARIO_LINHA;}

"+"                 			{return OP_SOMA;}   
"-"                 			{return OP_SUB;}      
"*"                 			{return OP_MULT;}   
"/"                 			{return OP_DIV;}      
"^"                 			{return OP_EXP;}
"="                 			{return OP_ATRIB;}
";"                 			{return PONTO_V;}

"{"								{return CHAVE_A;}
"}"								{return CHAVE_F;}

"("                             {return APAR;}
")"                             {return FPAR;}
  
{ident}     					{return ID;}
{numeral}                       {value = atoi(yytext); return NUM;}
[ \t\r]+                 		{/* do nothing-skip whitespace */}

.                               {value = gLineNumber; return ERROR;}
[\n]        					{gLineNumber++;}         		


%%
