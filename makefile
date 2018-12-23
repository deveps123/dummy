ASSIGN.exe: big2.c  big3.c  fact.c  prime.c  reverse.c
	gcc -o ASSIGN.exe big2.o big3.o fact.o prime.o reverse.o
big2.o:big2.c
	gcc -c big2.c
fact.o:fact.c
	gcc -c fact.c
reverse.o:reverse.c
	gcc -c reverse.c
prime.o:prime.c
	gcc -c prime.c
big3.o:big3.c
	gcc -c big3.c
