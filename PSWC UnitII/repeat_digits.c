#include <stdio.h>
#include <stdbool.h>      // C99 only

int main (void)
{
	long num;
	int digit;
	bool digit_seen [10] = {false};
	printf ("Enter a number:");
	scanf ("%d", &num);

	while (num > 0)
	{
		digit = num%10;
		if (digit_seen [digit])
			break;
		digit_seen [digit] = true;
		num /= 10;
	}
	if (num > 0)
		printf ("Digits are repeated\n");
	else
		printf ("No repitition\n");
	return 0;
}
