#include<stdio.h>
typedef struct employee
{
int emp_id;
char name[20];
char department[20];   
}employee;
void read(employee *v1,int n)
{int i;
for(i=0;i<n;i++)
    {
    printf("enter Emp-id");
    scanf("%d",&(v1+i)->emp_id);
    printf("enter name");
    scanf("%s",(v1+i)->name);
    printf("enter department");
    scanf("%s",(v1+i)->department);
   }
}
void display (employee *v1,int n)
{int i;
for(i=0;i<n;i++)
{
 printf("employee details are\n");
printf("%d\n",(v1+i)->emp_id);
printf("%s\n",(v1+i)->name);
printf("%s\n",(v1+i)->department);
}
}