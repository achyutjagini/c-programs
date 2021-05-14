a.out:client3.o mainpr2.o
	gcc client3.o mainpr2.o
client2.o:mainpr2.c server3.h
	gcc -c client3.c
mainpr.o:mainpr2.c server3.h
	gcc -c mainpr2.c