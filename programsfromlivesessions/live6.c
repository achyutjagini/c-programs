#include<stdio.h>
main()
{
 FILE *fp;
 fp=fopen("test1.txt","r");
 //fseek
 fseek(fp,4,SEEK_SET);
 char ch=fgetc(fp);
 fseek(fp,6,SEEK_CUR);
 ch=fgetc(fp);
 fseek(fp,-2,SEEK_END);
 ch=fgetc(fp);
 printf("%c\n",ch);
 fclose(fp);
}
