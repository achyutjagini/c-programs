#include <stdio.h>
#include <stdlib.h>

#define BLOCK_SIZE	256

void copy_file (const char *destfile, const char *srcefile)
{
	FILE *fsrce, *fdest;
        char buf [BLOCK_SIZE];  // Will read and write in chunks
	int ret_val;
	
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
                ret_val = fread (buf, 1, BLOCK_SIZE, fsrce);
                if (ret_val < BLOCK_SIZE)
		{
			fwrite (buf, 1, ret_val, fdest);
			break;
		}
		fwrite (buf, 1, ret_val, fdest);
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