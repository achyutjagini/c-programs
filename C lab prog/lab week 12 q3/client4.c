#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
int rollno;
char name[20];
int marks;   
}STUDENT;

void read(STUDENT *v1,int n)
{
int i;
for(i=0;i<n;i++)
    {printf("enter data of record #%d\n",i+1);
    printf("enter rollno:");
    scanf("%d",&(v1+i)->rollno);
    printf("enter name:");
    scanf("%s",(v1+i)->name);
    printf("enter marks:");
    scanf("%d",&(v1+i)->marks);
   }
}
void display (STUDENT *v1,int n)
{int i;
printf("Rollno  Name  Marks\n");
for(i=0;i<n;i++)
{
printf("%d  ",(v1+i)->rollno);
printf("%s  ",(v1+i)->name);
printf("%d  ",(v1+i)->marks);
printf("\n");
}
}
void sort(STUDENT *v1,int n)
{ int i,j;
STUDENT *temp1;

        
            for(j=1;j<=n;j++)
            {
                if(v1->marks<(v1+j)->marks)
                {
                  *temp1=*v1;
                  *v1=*(v1+j);
                  *(v1+j)=*temp1;
                }
            }
   printf("aa");    
}

