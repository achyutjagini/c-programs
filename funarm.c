#include<stdio.h>
int armstrong(int a)
{int dig,sum=0,cube,temp;
temp=a;
while(a!=0)
{dig=a%10;
cube=dig*dig*dig;
sum=sum+cube;
a=a/10;}
if(sum==temp)
return 1;
else
return 0;}
int main()
{int n,flag;
printf("enter no");
scanf("%d",&n);
flag=armstrong(n);
if(flag==1)
printf("it is armstrong no");
else
printf("not armstrong no"); }