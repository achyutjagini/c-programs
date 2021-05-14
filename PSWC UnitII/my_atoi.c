/*		my_atoi - convert a string (containing digits) into the corresponding number */
#include <stdio.h>

/* Function to find the length of a given string */
int my_strlen (char str[])
{
	int count;
	
	for (count = 0; str [count] != '\0'; count ++)
		;
	return count;
}

int my_atoi (char num_str [])
{
	int i;
	int ret_val = 0;
	
	for (i = 0; i < my_strlen (num_str); i ++)
	{
		if (num_str [i] >= '0' && num_str [i] <= '9')
		{
				ret_val *= 10;
				ret_val += num_str [i] - '0';
		}
		else
		{
			ret_val = -1;
			break;
		}
	}
	
	return ret_val;
}

int main (void)
{
	char num_str [10];
	
	printf ("Number string (+ve) to be converted:");
	scanf ("%s", num_str);
	printf ("Converted number is %d\n", my_atoi (num_str));
	return 0;
}

	