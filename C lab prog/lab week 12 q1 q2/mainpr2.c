#include<stdio.h>
#include<stdlib.h>
#include"server3.h"

int main()
{employee *head;
int n;
printf("enter no of employees");
scanf("%d",&n);

head=(employee *)malloc(n*sizeof(employee));
read(head,n);
display(head,n);
free(head);
}