
#include<stdio.h>
#include<string.h>

int main(){
    char s[10];
    char t[10];
    printf("Enter the string:\n");
    scanf("%s",s);
    int i,c=0;
    for(i=0;i<strlen(s);i++){
        if(s[i]==s[i+1]){
            //do nothing
        }
        else{
            t[c]=s[i];
            c++;
        }
    }
    t[c]='\0';
    printf("String:%s\n",t);
    return 0;   
}