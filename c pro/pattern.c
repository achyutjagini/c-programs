#include<stdio.h>
int main(){
    int n,sum;
    
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {printf("1");
     sum=1;
     for(int j=2;j<=i;++j)
     {printf("+%d",j);
     sum+=j;}
     printf("=%d\n",sum);
    }

}