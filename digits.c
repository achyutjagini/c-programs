#include<stdio.h>
int sum=0,c=0;
int count(int a)
{int dig;
if (a==0)
{printf("no of digits=%d\n",c);
return sum;}
else
{dig=a%10;
sum=sum+dig;
c++;
return count(a/10);}}
int main(void)
{int n,k;
printf("enter no");
scanf("%d",&n);
k=count(n);
printf("sum of digits=%d\n",k);}






