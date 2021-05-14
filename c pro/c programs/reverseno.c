#include<stdio.h>
int main(void){unsigned int number=0;
unsigned int rebmun=0;
unsigned int temp=0;
printf("\nenter a positive integer:");
scanf("%u",&number);
temp=number;
do{
    rebmun=10*rebmun+temp%10;
    temp=temp/10;
}
while(temp);
printf("\n the number %u reversed is %u\n",number,rebmun);
return 0;
}