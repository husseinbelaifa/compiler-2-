flex mini.l
bison -d mini.y
gcc mini.tab.c lex.yy.c  -o  mini
mini.exe
