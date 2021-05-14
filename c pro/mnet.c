#include<stdio.h>
#include<math.h>
int main(){
#define limit=0.00001
float f;
printf("enter x in degree");
scanf("%f",&x);
x=x*3.14;
int neg=-1.0;
float sum=0;
for(i=1;;i++)
{neg=neg*-1.0;
temp=(pow(x,(2*i-1)/fact((2*i)-1));
if(temp<limit)
break;
sum=sum+(temp*neg);
}
printf("%f",sum);
float r;
r=sin(x);
printf("%f",r);}
