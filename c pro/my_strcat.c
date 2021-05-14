#include <stdio.h>

/* Function to find the length of a given string */
int my_strlen (char str[])
{
	int count;
	
	for (count = 0; str [count] != '\0'; count ++)
		;
	return count;
}

/* Function to concatenate the second string to the first one */
void my_strcat (char first[], char sec[])
{
	int f_len = my_strlen (first);
	int s_len = my_strlen (sec);
	int i;
	
	for (i = 0; i < s_len; i ++)
		first[f_len + i] = sec[i];
	first [f_len+i] = '\0';
}


int main (void)
{
    	char str1 [60], str2 [20];

	printf ("Key in the first string:");
	scanf ("%s", str1);
	printf ("Key in the second string:");
	scanf ("%s", str2);
	my_strcat (str1, str2);
	printf ("The concatenated string is %s\n", str1);
	return 0;
}

