/* 

A dummy Bison file to generate the header file for token values.

Do 

bison -d tiny.y 

to generate tiny.tab.h and then #include
this in the .l file. 

*/
 
%token  NUM ID BEG END READ WRITE ADD SUB SEMICOL ASSIGNOP LPAR RPAR ERROR 
%%
dummy :
