#include<stdio.h>
#include<string.h>
int main()

{
char str1[100]="abcd";
char str2[100]="efgh";
char str3[100]="abcd";
char str4[100]="efgh";
char str5[100]="abcd";
char str6[100]="efgh";

char str7[100]="abcd";
char str8[100]="efgh";

char str9[100]="abcd";
char str10[100]="efgh";
printf("%s\n",strcat(str1,str2));
printf("%d\n",strcmp(str3,str4));
printf("%s\n\n",strcpy(str5,str6));
printf("%s\n",strncpy(str7,str8,2));
printf("%s\n\n",strncat(str9,str10,3));
}