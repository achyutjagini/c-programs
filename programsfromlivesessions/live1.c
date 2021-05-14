#include<stdio.h>
main()
{
 FILE *fp;
 fp=fopen("test.dat","r");
 char ch=fgetc(fp);
  printf("%c",ch);
 fclose(fp);
}

