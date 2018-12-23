ASSIGN.exe:big2.o fact.o prime.o reverse.o
	gcc -o ASSIGN.exe big2.o fact.o prime.o reverse.o
big2.o:big2.c
	gcc -c big2.c
fact.o:fact.c
	gcc -c fact.c
reverse.o:reverse.c
	gcc -c reverse.c
prime.o:prime.c
	gcc -c prime.c

