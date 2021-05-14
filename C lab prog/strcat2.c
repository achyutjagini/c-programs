#include <stdio.h>
#include<string.h>

int main (void)
{   char str1[30],str2[30];
int n;
    printf("enter string");
    scanf("%s",str1);
    printf("enter string to add");
    scanf("%s",str2);
    
    
    int f_len=strlen(str1);
    int s_len=strlen(str2);
    int i;
    for(n=1;n < 3;n++)
    {for (i = 0; i < s_len; i ++)
		{str1[f_len + i] = str2[i];
        }
    }
	str1[f_len+i] = '\0';

    printf("tne concatenated string is %s\n",str1);

}