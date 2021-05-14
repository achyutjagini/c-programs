#include <stdio.h>
int sumevenparity(int a[],int size)
{
int temp,c,sum=0,i;
for(i=0;i<size;i++)
{
    temp=a[i];
    c=0;
    while(temp!=0)
    {if(temp%2==1)
    ++c;
    temp/=2;
    }

if(c%2==0){
    temp=a[i];
    while(temp!=0)
    {sum+=temp%10;
    temp/=10;
    }
}
}
return sum;
}


int main(void)
{
    int a[50],size,i;
    printf("enter size");
    scanf("%d",&size);
    printf("enter array");
    for(i=0;i<size;i++)
    {scanf("%d",&a[i]);}
    printf("sum even parities:%d\n",sumevenparity(a,size));
}