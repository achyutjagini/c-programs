#include<stdio.h>
struct student
{
 int i;
 float f;
}; 
main()
{
 struct student s={2,4.5f},s1;
FILE *fp;
fp=fopen("stud1.dat","w");
char *p="abcde";
char a[50];
fwrite(&s,sizeof(struct student),1,fp);
fclose(fp);
fp=fopen("stud1.dat","r");
fread(&s1,sizeof(struct student),1,fp);
printf("%d %f",s1.i,s1.f);
fclose(fp);
//printf("%s",a);
}


