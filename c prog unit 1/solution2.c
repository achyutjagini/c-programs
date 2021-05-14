#include <stdio.h>
int main (void)
{
	char ch;
	int nl = 0;
	int nw = 0;
	int nc = 0;
	while( (ch = getchar()) != EOF)
	{
		++nc;
		if(ch == '\n')
		{
			++nl;
		}
		if(ch == ' ' || ch == '\n' || ch == '\t')
		{
			++nw;
		}
	}
	printf("# of char : %d\n", nc);
	printf("# of words : %d\n", nw);
	printf("# of lines : %d\n", nl);
	return 0;
 }
 