#include<stdio.h>
int fib()
{int a[50];
int size;
int i;
printf("enter size");
scanf("%d",&size);
a[0]=0;
a[1]=1;
for(i=2;i<size;++i)
    {a[i]=a[i-1]+a[i-2];
    }
for(i=0;i<size;++i)
    {printf("%d",a[i]);
    }    
}    
int main()
{ fib();

}