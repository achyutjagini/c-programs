/* Program to get a string corresponding to the binary representation of a number */
#include <stdio.h>

void get_binary_str (int value, char str[])
{
	int count;
	int max = sizeof (int) * 8;

	for (count = 0; count < max; count ++)
	{
		str [max - 1 - count] = (value & 1) ? '1': '0';
		value >>= 1;
	}
	str [count] = '\0';
}

int main (void)
{
	char str [33];	// Assuming int could be a max of 32 bits
	int num;

	printf ("Key in the number:");
	scanf ("%d", &num);
	get_binary_str (num, str);
	printf ("The binary string is %s\n", str);
	return 0;
}
