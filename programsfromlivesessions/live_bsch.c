#include<stdio.h>
main()
{
 int l,n,key,mid,h;
 int a[]={4,5,6,7,8};
 n=5;
 l=0;
 key=41;
 h=n-1;
 while(l<=h)
  {
   mid=(l+h)/2;
   if(a[mid]==key)
     break;
   if(key<a[mid])
     h=mid-1;
   else
     l=mid+1;
   }
 if(a[mid]==key)
  printf("found");
 else
  printf("not found");
 }
 
