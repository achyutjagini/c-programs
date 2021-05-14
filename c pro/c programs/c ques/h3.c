#include <stdio.h>

int main()
{
int array[100]; 
int temp1,temp2, c, n ,j,digit,sum=0;
int i,r=0;
printf("enter size of array\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
for (i=0;i<n;i++){
     scanf("%d",&array[i]);}

for(i=0;i<n;i++)    
{
temp1=array[i];
temp2=array[i];
c=0;
while(temp1)
{   r=temp1%2;
    {if(r==1)
        c=c+1;}
temp1=temp1/2;
}

if (c%2==0)
    {while(temp2)
      {digit=temp2%10;
        sum+=digit;
        temp2/=10;
    }
    }
}
printf("%d",sum);
}

