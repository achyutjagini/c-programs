#include<stdio.h>
#include<math.h>
int main(){
int t1;int i=1;int f=1;int theta;
float t;
float sum=0.0;
do
{t1=1;
while(t1<=f){
f=f*t1;
t1++;}
t=pow(theta,i)/f;
f=1;
i=i+2;
sum=sum+t;
printf("%f",sum);}
while(t>0.00001);
}