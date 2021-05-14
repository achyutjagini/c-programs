#include <stdio.h>
void main() 
{
   char str[100], sstr[100];
   int pos, l, c = 0;
   
 
   printf("Input the string : ");
   scanf("%s",str);
      
   printf("Input the position to start extraction :");
   scanf("%d", &pos);
   
   printf("Input the length of substring :");
   scanf("%d", &l);
 
   while (c < l) 
   {
      sstr[c] = str[pos+c-1];
      c++;
   }
   sstr[c] = '\0';
 
   printf("The substring retrieve from the string is :%s\n", sstr);
 
}