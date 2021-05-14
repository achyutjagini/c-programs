#include<stdio.h>
int main()
{int flag=1;
int a;
scanf("%d",&a);
while(flag)
{
    if(a==10)
    {
        flag=0;
    }
}
printf("%d",a);
}