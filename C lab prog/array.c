#include<stdio.h>
int main()
{char a[5];
int i,j;
for (i=0;i<5;i++)
{
    scanf(" %c",&a[i]);
}
for (j=5;j>=0;j--)
{
printf("%c",a[j]);
}
}