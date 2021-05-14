/*		itoa - convert a number to the equivalent string */
#include <stdio.h>

void my_itoa (int num, char num_str [])
{
	sprintf (num_str, "%d", num);
}

int main (void)
{
	char num_str [10];
	int num;
	
	printf ("Number to be converted:");
	scanf ("%d", &num);
	my_itoa (num, num_str);
	printf ("Converted string is %s\n", num_str);
	return 0;
}

	