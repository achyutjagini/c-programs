#include <stdio.h>
int main()
{int a,i,n,r;
printf("enter a");
scanf("%d",&a);
printf("enter r");
scanf("%d",&r);
printf("enter no of terms");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d\n",a);
a=a*r;

}
}
