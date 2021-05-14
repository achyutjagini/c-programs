a.out:client4.o mainpr4.o
	gcc client4.o mainpr4.o
client4.o:mainpr4.c server4.h
	gcc -c client4.c
mainpr4.o:mainpr4.c server4.h
	gcc -c mainpr4.c