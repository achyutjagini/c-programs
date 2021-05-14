#include<stdio.h>
int main(void){
    char ch;
    while((ch=getchar())!='\n'){
        char l=++ch;
        putchar(l);
    }
    return 0;
}