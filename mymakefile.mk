a.out:utils_list.o MainProg.o
	gcc utils_list.o MainProg.o
utils_list.o:MainProg.c student_list.h
	gcc -c utils_list.c
MainProg.o:MainProg.c student_list.h
	gcc -c MainProg.c	
