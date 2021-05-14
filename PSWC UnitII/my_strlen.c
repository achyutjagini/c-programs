#include <stdio.h>

/* Function to find the length of a given string */
int my_strlen (char str[])
{
	int count;
	
	for (count = 0; str [count] != '\0'; count ++)
		;
	return count;
}

int main (void)
{
    char inp_str [40];

    printf ("Key in a string:");
    scanf ("%[^\n]", inp_str);
    printf ("Length of the string is %d\n", my_strlen (inp_str));
    return 0;
}

