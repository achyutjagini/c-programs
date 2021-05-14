#include <stdio.h>
int main (void)
{
	int nl = 0;
	int nc = 0;
	char ch;
	while ((ch = getchar())!=EOF)
	{
		nc++;
		while((ch=getchar())!= '\n')
		{
			nc++;
		}
		nc++;
		nl++;
	}
	printf("number of characters %d\n",nc);
	printf("number of lines %d\n",nl);
	return 0;
}