#include<stdio.h>
main()
{
 FILE *fp;
 char a[]="testing live sessions";
 fp=fopen("test1.txt","w");
 fputs(a,fp);
 fclose(fp);
}
 


