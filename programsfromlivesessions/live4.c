#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *fp;
 fp=fopen("test.txt","r");
 char ch;
   while((ch=fgetc(fp))!=EOF)
   { if(isdigit(ch))
 printf("%d\n",ch-'0');
    }
 fclose(fp);
}
  
