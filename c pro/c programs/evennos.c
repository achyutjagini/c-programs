#include<stdio.h>
int main(void){
int n;
printf("enter n\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{if(i&1)
continue;
printf("%d\n",i);}    
}