#include<stdio.h>
int main()
{
 int i,n,found;
 int a[50];
 int key;
 printf("enter the num of ele");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("key ele");
 scanf("%d",&key);
 i=0; found=0;
 while(i<n)
  {
    if(a[i]==key)
     break;
   i++;
  }
 if(i<n)
  printf("succ search %d",i);
 else
  printf("Unsuccesful search");
}
 
