#include<stdio.h>
int main()
{
int number,temp,digit=0;
int rebmun=0;
printf("enter number");
scanf("%d",&number);
temp=number;
while(temp)
{
rebmun=10*rebmun+temp%10;
temp=temp/10;
}
if (rebmun==number)
printf("palindrome");
else
{
    printf("no");
}





}