#include <stdio.h>
int main()
{
 int a[50];
 int n,i,j,mp,temp;
 printf("enter the number of elements\n");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 //selection sort
 for(i=0;i<n-1;i++)
  {
    mp=i;
    for(j=i+1;j<n;j++)
     if(a[j]<a[mp])
       mp=j;
    if(mp!=i)
     {
     temp=a[i];
     a[i]=a[mp];
     a[mp]=temp; 
     }
  }
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
}

