LinkedList: LinkedList_Main.o LinkedList_Utils.o 
	gcc -o LinkedList LinkedList_Main.o LinkedList_Utils.o 
	
LinkedList_Main.o : LinkedList_Main.c s_list.h
	gcc -c LinkedList_Main.c
LinkedList_Utils.o : LinkedList_Utils.c s_list.h
	gcc -c LinkedList_Utils.c

clean :
	del LinkedList.exe LinkedList_Main.o LinkedList_Utils.o 