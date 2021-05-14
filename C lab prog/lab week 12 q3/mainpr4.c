#include<stdio.h>
#include<stdlib.h>
#include"server4.h"
int main()
{int n;
printf("enter no of records");
scanf("%d",&n);
STUDENT *head;
head=(STUDENT *)malloc(n*sizeof(STUDENT));

read(head,n);
display(head,n);
sort(head,n);
display(head,n);



}
