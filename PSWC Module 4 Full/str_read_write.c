#include <stdio.h>
#include <stdlib.h>
#include "node_struct.h"

void get_node_data (NODE *in_node)
{
    printf ("Key in the title of the book (Max 50):");
    scanf ("%s", in_node->title);
    printf ("Key in the name of the author (Max 50):");
    scanf ("%s", in_node->author);
    printf ("Key in the year of publication of the book:");
    scanf ("%d", &in_node->pub_year);
    printf ("Key in the price of the book:");
    scanf ("%f", &in_node->price);
}

/* Display all the node data */
void display_record (NODE *in_node)
{
    printf ("\nTitle of the book is %s\n", in_node->title);
    printf ("Name of the author is %s\n", in_node->author);
    printf ("Year of publication is %d\n", in_node->pub_year);
    printf ("Price of the book is %f\n", in_node->price);
}

void print_num_recs (FILE *fp)
{
    int num_recs;

    fseek (fp, 0, SEEK_END); // Seek to the end of the file

    num_recs = ftell (fp) / sizeof (NODE);
    printf ("Number of records is %d\n", num_recs);
}


int main (void)
{
    int i, count = 0;
    char filename [30];
    int choice, rec_num;
    char sub_opt;
    NODE record;
    FILE *fp;
    long str_size = sizeof (NODE);
	
    printf ("key in the file name:");
    scanf ("%s", filename);

    if ((fp = fopen (filename, "ab+")) == NULL)
    {
        printf ("Cannot open file %s\n", filename);
        exit (3);
    }

    while (1)
    {
        printf ("Key in your option:a - add s-show n - no of records q - quit:");
        scanf (" %c", &choice);
        if (choice == 'q')
            break;
		
        switch (choice)
        {
            case 'n':   // Print the total number of records stored in the file
                print_num_recs (fp);
            break;
   
            case 'a':
                get_node_data (&record);
                fwrite (&record, 1, str_size, fp);
            break;
				
            case 's':
                while (1)
                {
                    printf ("f - first l -last a - any p - prev n - next q-quit:");
                    scanf (" %c", &sub_opt);
                    if (sub_opt == 'q')
                        break;
                    switch (sub_opt)
                    {
                        
                        case 'f':
                            rewind (fp);
                            fread (&record, 1, str_size, fp);
                            display_record (&record);
                        break;

                        case 'l':
                            if (fseek (fp, -str_size, SEEK_END) == 0)
                            {
                                fread (&record, 1, str_size, fp);
                                display_record (&record);
                            }
                        break;

                        case 'a':
                            printf ("Which record to display?:");
                            scanf ("%d", &rec_num);
                            if (fseek (fp, (rec_num - 1)*str_size, SEEK_SET) == 0)
                            {
                                fread (&record, 1, str_size, fp);
                                display_record (&record);
                            }
                        break;
                        case 'p': // Previous record
                            if (fseek (fp, -2*str_size, SEEK_CUR) == 0)
                            {
                                fread (&record, 1, str_size, fp);
                                display_record (&record);
                            }
                        break;
                        case 'n': // next record
                            if (fread (&record, 1, str_size, fp) == str_size)
                                display_record (&record);
                        break;
                        default:
                            printf ("Unrecognized option\n");
                        break;
                    }
                }
		break;
                default:
                    printf ("Unrecognized choice\n");
                break;
            }   
        }
	fclose (fp);
	return 0;
}
