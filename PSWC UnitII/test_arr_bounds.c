#include <stdio.h>

int main (void)
{
	int i, arr [10];

	for (i = 0; i < 12; i ++)
		arr[i] = 45;
	for (i = 0; i < 12; i ++)
		printf ("%d  ", arr[i]);
	
	return 0;
}
