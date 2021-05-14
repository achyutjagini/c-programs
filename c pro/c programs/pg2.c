#include<stdio.h>
int main(void)
{
int total_days;
int years,weeks,days,temp;
printf("key in total days");
scanf("%d",&total_days);
years=total_days/365;
temp=total_days%365;
weeks=temp/7;
days=temp%7;
   printf("years=%d weeks=%d days=%d\n",years,weeks,days);
}



    
