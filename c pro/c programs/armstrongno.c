#include<stdio.h>
#include<math.h>
int main()
{
 int i,temp1,temp2,low,high,result,n,remainder=0;

printf("enter low");
scanf("%d",&low);
printf("enter high");
scanf("%d",&high);
for(i=low+1;i<high;++i)
{temp2=i;
temp1=i;
//no of digits calculation
while(temp1!=0)
{temp1/=10;
++n;}
//result contains sum of nth power
while(temp2!=0)
{remainder=temp2%10;
result+=pow(remainder,n);
temp2/=10;}
//check if no i=sum of nth power
if(result==i){
    printf("%d ",i);
}
//resetting to check
n=0;
result=0;}

}