#include<stdio.h>
struct s
{
char name[10];
char title[10];
int year;
float price;
};

void read(struct s * v)
{   printf("enter name");
    scanf("%s",v->name);
    printf("enter year")
    scanf("%d",&v->year);
    printf("enter title")
    scanf("%s",v->title);
    printf("enter price")
    scanf("%f",&v->price);
};

void display(struct s v)
{
printf("name:%s",v.name);
printf("title:%s",v.title);
printf("year:%d",v.year);
printf("price:%f",v.price);
}

int main()
{
struct s a[10];
int i=0;
int j,k=1;
do{char ch;
    printf("enter option");
    ch=getchar();
    switch(ch)
    {
      case 'a':
       read(&a[i]);
       i++;
       break;

       case 's':
        printf("enter the record number");
        scanf("%d",&j);
        if(j>i)
        {
            k=0;
            break;
        }
        display(a[j-1]);
        break;

        case 'q':
        {
            k=0;
        }
    
    
    }

}while (k==1);
}