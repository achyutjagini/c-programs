#include <stdio.h>
#include <stdlib.h>

int FileSize (char *filename)
{
	FILE *fp;
	int count = 0, in_char;
	
	if ((fp = fopen (filename, "r")) == NULL)
	{
		printf ("Error in opening the file\n");
		exit (1);
	}
	
	while (1)
	{
		in_char = fgetc (fp);
		if (in_char == EOF)
			break;
		count ++;
	}
	fclose (fp);
	return count;
}

int main (void)
{
	char filename [50];
	
	printf ("Name of the file:");
	scanf ("%s", filename);
	
	printf ("size of the file is %d bytes\n", FileSize (filename));
	return 0;
}

