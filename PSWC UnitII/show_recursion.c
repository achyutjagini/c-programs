#include <stdio.h>

// Prints numbers from test to 1 in decreasing order
void printFun (int test)
{
	if (test < 1)
		return;
	else
	{
		printf ("%d ", test);
		printFun (test - 1);	// Statement 2
		printf ("%d  ", test);
	}
}

int main (void)
{
	int test;
	printf ("Key in a value:");
	scanf ("%d", &test);
	printFun (test);
	return 0;
}
