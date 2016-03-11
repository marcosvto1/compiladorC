scan: 		scanMain.o lex.yy.o
		gcc -o scan scanMain.o lex.yy.o

scanMain.o:	scanMain.c tiny.tab.h
		gcc -c scanMain.c

lex.yy.o:	tiny.l tiny.tab.h
		flex tiny.l
		gcc -c lex.yy.c 

tiny.tab.h:	tiny.y
		bison -d tiny.y

# use del on Windows. use rm on Linux/Cygwin/Mac
clean:		
		rm *.o 
