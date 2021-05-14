#include<stdio.h>
int main()
{
int number,temp,digit=0;
int rebmun=0;
int temp2=1;
printf("enter number");
scanf("%d",&number);
temp=number;

while(temp)
{digit=temp%10;
rebmun=10*rebmun+digit;
temp=temp/10;
}
if (rebmun==number)
printf("palindrome");
else
{
    printf("no");
}





}