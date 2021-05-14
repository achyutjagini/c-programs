#include <stdio.h>
#include <stdlib.h>

void Write_Data (char *filename)
{
        FILE *fp;
        int i, count = 0;
        int marks;
        char rollNum [30];   // Alphanumeric characters 

        if ((fp = fopen (filename, "w+")) == NULL)
        {
            printf ("Failed to create/open file %s\n", filename);
            exit (2);
        }

        for (i = 0; i < 5; i ++)
        {
            printf ("Key in the roll number:");
            scanf ("%s", rollNum);
            printf ("Key in the marks:");
            scanf ("%d", &marks);
            fprintf (fp, "%s %d", rollNum, marks);
        }
        fclose (fp);
}

void Read_Data (char *filename)
{
	FILE *fp;
        int i, count = 0;
        int marks;
        char rollNum [30];   // Alphanumeric characters 

        if ((fp = fopen (filename, "r")) == NULL)
        {
            printf ("Failed to open file %s\n", filename);
            exit (2);
        }

        for (i = 0; i < 5; i ++)
        {
            fscanf (fp, "%s %d", rollNum, &marks);
            printf ("Rollnum is %s Marks is %d\n", rollNum, marks);
        }
        fclose (fp);
}


int main (void)
{
	char filename [50];
        
        printf ("key in a filename:");
        scanf ("%s", filename);

        Write_Data (filename);
        Read_Data (filename);
       
	return 0;
}
