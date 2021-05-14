#include<stdio.h>
main()
{
FILE *fp;
fp=fopen("stud.dat","w");
char *p="abcdef";
char a[50];
fputs(p,fp);
fclose(fp);
fp=fopen("stud.dat","r");
fseek(fp,1,SEEK_SET);
fgets(a,2,fp);
//a[2]='\0';
printf("%s\n",a);
/*fseek(fp,2,SEEK_CUR);
fgets(a,2,fp);
a[2]='\0';
printf("%s",a);*/
fclose(fp);
}
