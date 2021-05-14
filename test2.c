#include <stdio.h>
     
int main(void)
{
    int a[3]={1,2,3};
    int a[3]={3,4,5};
    a[1]=a[2];
    printf("%d",a[2]);
}