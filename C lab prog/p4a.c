#include<stdio.h>
#include<string.h>

int main(){
    char s[50];
    char t[10][50];//can store 10 words of length 50
    printf("Enter the string:\n");
    scanf("%[^\n]",s);
    int i,c=0,j,k,c1=-1;
    for(i=0;i<strlen(s);i++){
        if(s[i]==' '|| i==(strlen(s)-1)){
            for(j=c1+1,k=0;j<=i;j++,k++){
                t[c][k]=s[j];//copying
            }
            t[c][k]='\0';
            c++;
            c1=i;
         }
    }
    for(i=0;i<c;i++){
        printf("%s ",strrev(t[i]));
    }
    return 0;   
}