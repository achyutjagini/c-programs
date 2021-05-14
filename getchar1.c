#include<stdio.h>
int main()
{   
    int i,f,a;
    char arr[50];
    printf("enter size");
    scanf("%d",&a);

    int getchar();
    f=getchar();
    while((f=getchar())!='\n')
         {
            for(i=0;i<a;i++)
            {scanf("%c",&arr[i]);}
         }
for(i=0;i<a;i++)
{
    printf("%c",arr[i]);
}
}