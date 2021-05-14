/*
Write a program that will read an arbitrary number of proverbs from the
keyboard and store them in memory that’s allocated at runtime. the program should then
output the proverbs ordered by their length, starting with the shortest and ending with the
longest.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	TOTAL_NUM	50

void display_proverbs (char *proverbs[])
{
	int i;
	
	for (i = 0;proverbs [i] != NULL; i ++)
		printf ("%s\n", proverbs [i]);
}

void sort_display (char *proverbs[], int count)
{
	
}

void free_memory (char *proverbs[])
{
	int i;

	for (i = 0; proverbs[i] != NULL; i ++)
		free (proverbs[i]);
}


int main (void)
{
	char *proverbs [TOTAL_NUM];
	char proverb [80];		// Each proverb not more than 80 characters in length

	int count = 0, i, len;
	char opt = 'y', temp;		// Any arbitrary value

	for (i = 0; i < TOTAL_NUM; i ++)
		proverbs [i] = NULL;

  	while (opt != 'q')
	{
		printf ("Key in the proverb:");
		scanf ("%[^\n]", proverb);
		while (getchar () != '\n')
			;
		len = strlen (proverb) + 1;
		//printf ("The proverb is %s\n", proverb);
		if ((proverbs [count] = (char *) malloc (len)) == NULL)
		{
			printf ("malloc failure\n");
			exit (1);
		}
		strcpy (proverbs [count], proverb);
		count ++;
		if (count == TOTAL_NUM)
		{
			printf ("Max limit reached\n");
			break;
		}
		printf ("Enter q to quit: Any other key to continue:");
		opt = getchar ();
	}
	
	display_proverbs (proverbs);
	sort_display (proverbs, count);
	free_memory (proverbs);
}