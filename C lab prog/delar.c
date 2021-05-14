#include<stdio.h>
int main()
{int i,size,position;
int arr[10];
printf("enter size");
scanf("%d",&size);
printf("enter position");
scanf("%d",&position);
printf("enter array");
for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
for(i=position;i<size;i++)    
    arr[i-1]=arr[i];
for(i=0;i<size-1;i++)
    printf("%d",arr[i]);

}