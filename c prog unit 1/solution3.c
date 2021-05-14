#include <stdio.h>
int main (void)
{
	char ch;
	int nl=0, nc=0, nw=0;
	int inword = 0; // not in a word so far
	while( (ch = getchar()) != EOF)
	{
		++nc;
		if(ch == '\n')
		{
			++nl;
		}
		if(inword && (ch == ' '|| ch == '\t' || ch == '\n'))
		{
			inword = 0; 
			++nw;
		}
		// avoid recomputation of white space concept
		else if (!(ch == ' '|| ch == '\t' || ch == '\n'))
		{
			inword = 1;
		}
	}
	printf ("Number of characters is %d\n", nc);
	printf ("Number of words is %d\n", nw);
	printf ("Number of lines is %d\n", nl);
	return 0;
}