#include<stdio.h>
int main(void){
    int i,c;
    c=25;
    i=2;
    if(c&(1<<i)){
        printf("bit is set");
    }
    else{
        printf("bit isnt set");
    }
}