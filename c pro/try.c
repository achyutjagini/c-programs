#include <stdio.h>
#include<string.h>
int main (void)
{  
    char str1[30],str2[30];
int n;
    printf("enter string");
    scanf("%s",str1);
    printf("enter string to add");
    scanf("%s",str2);
    printf("enter no of times to add");
    scanf("%d",&n);
    int i,j,l;
    
    for(i=0;i<n;i++)
    {  l=strlen(str1);
      for (j = 0; j <strlen(str2); ++j)
	   {
       str1[l+ j] = str2[j];
    }
	str1[l+j] = '\0';
    }

 printf("tne concatenated string is %s\n",str1);
}

