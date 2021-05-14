#include<stdio.h>
int main(void){
    int i,c;
    c=25;
    i=3;
    printf("%d",c&~(1<<i));
}