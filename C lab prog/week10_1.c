#include<stdio.h>
struct date
{
int dd;
int mm;
int yyyy;
};
int input(struct date *v1);
int main()
{
    typedef struct date Date;
    Date date1;
    Date date2;
    input(&date1);
}
int input(struct date *v1)
{  printf("enter date in dd mm yyyy");
scanf("%d %d %d",&v1->dd,&v1->mm,&v1->yyyy);
printf("%d/%d/%d",v1->dd,v1->mm,v1->yyyy);
}
