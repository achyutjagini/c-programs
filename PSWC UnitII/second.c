#include <stdio.h>

extern int my_strcmp (char [], char []);

int main (void)
{
     char str1 [25], str2 [25];

    printf ("Key in a string1:");
    scanf ("%s", str1);
    printf ("Key in a string2:");
    scanf ("%s", str2);
    if (my_strcmp (str1, str2))
	printf("The two strings are equal\n");
    else
	printf ("The two strings are not equal\n");
    return 0;
}


