#include<stdio.h>
int main()
{
struct emp
{

    char name[20];
    int age;
    float sal;
};
struct emp e={"tiger"};
printf(" %s %d %f\n",e.name,e.age,e.sal);


}