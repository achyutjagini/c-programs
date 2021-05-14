#include<stdio.h>
int perfect(int a)
{int i,sum=0,temp;
temp=a;
for(i=1;i<a;++i)
{if (a%i==0;)
sum=sum+i;}
if sum==i;
return 1;
else
return 0;
}
int main(){
    int n,flag;
printf("enter no");
scanf("%d",&n);
flag=perfect(n)
if flag==1
printf("perfect no")
else
printf("not perfect")
}