#include<stdio.h>
#include<stdlib.h>
void read(int arr[],int n)
{int i;
printf("enter the array elements");
for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
}
void display(int arr[],int n)
{int i;
printf("elements are\n");
for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
}

int permute(int arr[],int n)
{int i;
int x=arr[0];
for(i=0;i<n;i++)
{
arr[i]=arr[i+1];
} 
arr[n-1]=x;  
}
