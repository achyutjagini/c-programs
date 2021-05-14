#include<stdio.h>
main()
{
 FILE *fp1,*fp2;char ch;
 fp1=fopen("test.txt","r");
 fp2=fopen("test3.txt","w");
 while((ch=fgetc(fp1))!=EOF)
  {
   fputc(ch,fp2);
  }
  fclose(fp1);
  fclose(fp2);
 }
 
