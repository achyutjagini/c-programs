#include<stdio.h>
typedef struct student
{
 int r;
 float s;
}student;
main()
{
  student s1,s2;
  s1.r=22;
  s1.s=9.5f;
 FILE *fp;
 fp=fopen("test2.txt","w");
  fwrite(&s1,sizeof(student),1,fp);
 fclose(fp);
 fp=fopen("test2.txt","r");
 fread(&s2,sizeof(student),1,fp);
 fclose(fp);
 printf("%d %f",s2.r,s2.s);
} 






