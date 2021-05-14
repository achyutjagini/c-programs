#include<stdio.h>
int main(void){
    int dd,mm,yy;
    printf("enter date in dd format\n");
    scanf("%d",&dd);
    printf("enter month in mm format\n");
    scanf("%d",&mm);
    printf("enter year in yyyy format\n");
    scanf("%d",&yy);
    int maxdays;
    if(yy%4==0 && yy%100!=0|yy%400==0 && mm==2)
    maxdays=29;
    else if (mm==1|mm==3|mm==5|mm==7|mm==8|mm==10|mm==12)
    maxdays=31;
    else if(mm==4|mm==6|mm==9|mm==7|mm==11)
    maxdays=30;
    else
    maxdays=28;
    if(mm>12|mm<1)
    printf("invalid month\n");
    else if(dd>maxdays|dd<1)
    printf("invalid date\n");
    else
    printf("valid date\n");
    if(dd==maxdays && mm==12)
    {dd=1;
    mm=1;
    yy+=1;}
    else if(dd==maxdays && mm!=12)
    {dd=1;
    mm+=1;}
    else
    dd+=1;
printf("date=%d/%d/%d\n",dd,mm,yy);
}
