#include <stdio.h>
#include <stdlib.h>

void copy_file (const char *destfile, const char *srcefile)
{
	FILE *fsrce, *fdest;
        char buf [120];  // Assuming that no line will be more than 120 characters long
	int in_char;
	
	if ((fsrce = fopen (srcefile, "r")) == NULL)
	{
		printf ("Error in opening the source file\n");
		exit (2);
	}
	if ((fdest = fopen (destfile, "w")) == NULL)
	{
		printf ("Error in opening the destination file\n");
		exit (2);
	}
	
	while (1)
	{
		if (fgets (buf, 120, fsrce) == NULL) // Nothing more to read
			break;
		if (fputs (buf, fdest) == EOF)
		{
			printf ("Error in writing to the destination file\n");
			exit (3);
		}
	}
	fclose (fsrce);
	fclose (fdest);
}

int main (void)
{
	char dest_file [50];
	char srce_file [50];
	
	printf ("Key in the name of the source file:");
	scanf ("%s", srce_file);
	printf ("Key in the name of the destination file:");
	scanf ("%s", dest_file);
	copy_file (dest_file, srce_file);
	return 0;
}
