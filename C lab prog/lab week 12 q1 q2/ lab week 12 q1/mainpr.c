#include<stdio.h>
#include<stdlib.h>
int main()
{int n,i;
int p=0;
printf("enter no of array elements");
scanf("%d",&n);
int *arr=(int *)malloc(n*sizeof(int));
read(arr,n);
display(arr,n);
permute(arr,n);
display(arr,n);
permute(arr,n);
display(arr,n);
}