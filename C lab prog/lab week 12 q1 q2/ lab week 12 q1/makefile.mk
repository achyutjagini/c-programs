a.out:client2.o mainpr.o
	gcc client2.o mainpr.o
client2.o:mainpr.c server2.h
	gcc -c client2.c
mainpr.o:mainpr.c server2.h
	gcc -c mainpr.c