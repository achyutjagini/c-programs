#define PI 22/7
#include<stdio.h>
int main(void)
{
float radius,dia,perimeter,area;
printf("key in radius");
scanf("%f",&radius);
dia=2*radius;
perimeter=2*PI*radius;
area=PI*radius*radius;
printf("radius=%.2f Diameter=%.2f Perimeter=%.2f Area=%.2f\n",radius,dia,perimeter,area);
return 0;
}
