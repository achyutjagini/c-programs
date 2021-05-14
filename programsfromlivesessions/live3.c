#include<stdio.h>
main()
{
 FILE *fp;
 fp=fopen("test.txt","w");
  int i=0;
 char a[20]="abcdefghijk";
 while(a[i]!='\0')
  {
    fputc(a[i],fp);
    i++;
  }
 //fputc('b',fp);
 //fputc('c',fp);
 fclose(fp);
}


