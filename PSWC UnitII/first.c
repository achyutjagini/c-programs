#include <stdio.h>

/* Function to find the length of a given string */
int my_strlen (char str[])
{
	int count;
	
	for (count = 0; str [count] != '\0'; count ++)
		;
	return count;
}

/* Function to compare two strings - return 1 if the strings are equal 0 if not */
int my_strcmp (char str1[], char str2[])
{
	int len1 = my_strlen (str1);	// Use the function written earlier to find the string length
      	int len2 = my_strlen (str2);
  	int ret_val = 1, count;

    	if (len1 == len2)	// Proceed only if the two strings are of equal length
 	{
		for (count = 0; count < len1; count ++)
			if (str1[count] != str2[count])
			{
				ret_val = 0;
				break;
			}
	}
	else
		ret_val = 0;
	return ret_val;

}
