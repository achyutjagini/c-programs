#include<stdio.h>
int main()
{float x;
printf("enter x");
scanf("%f",&x);
x=x*3.14/180;
float term;
int i=0;
float tsign=0.0; 
term=x;
tsign=term;
for(i=3;;i=i+2)
{
term=-term*x*x/(i*(i-1));
tsign=tsign+term;
if (term<0.0001)
    break;
}
printf("%f\n",tsign);
}






