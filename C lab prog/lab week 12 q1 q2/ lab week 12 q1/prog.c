#include<stdio.h>
#include<stdlib.h>
int permute(int arr[],int n)
{int i;
int x=arr[0];
for(i=0;i<n;i++)
{
arr[i]=arr[i+1];
} 
arr[n-1]=x;  
}

int main()
{int n,i;
int p=0;
printf("enter no of array elements");
scanf("%d",&n);
//for(i=0;i<n;i++)
int *arr=(int *)malloc(n*sizeof(int));
printf("enter the array elements");
for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
 printf("array before permutation\n");
for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
permute(arr,n);
printf("array after permutation\n");
for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
}