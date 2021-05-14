#include <stdio.h>
/* Function to find the length of a given string */
int my_strlen (char str[])
{
	int count;	
	for (count = 0; str [count] != '\0'; count ++)
		;
	return count;
}
/* Function to reverse a string and return it back in the input string itself */
void reverse_str (char sub_str[])
{
	char temp_str [60];
	int s_len = my_strlen (sub_str);
	int i;
	
	for (i = 0; i < s_len; i ++)
		temp_str [s_len - (i + 1)] = sub_str [i];
	temp_str [s_len] = '\0';
	
	for (i = 0; i < s_len; i ++)
		sub_str [i] = temp_str [i];
	sub_str [s_len] = '\0';
}

int main (void)
{
    	char str [40];

	printf ("Key in a string");
	scanf ("%s", str);
	printf ("The original string is %s\n", str);
	reverse_str (str);
	printf ("The reversed string is %s\n", str);
	return 0;
}

