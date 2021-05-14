/*				MainProg.c					*/
#include <stdio.h>
#include <stdlib.h>
#include "student_list.h"

/* Create a new node */
STUDENT_LIST *create_node (void)
{
    STUDENT_LIST *p_node;

    if ((p_node = malloc (sizeof (STUDENT_LIST))) != NULL)
        p_node -> next = NULL;
    return p_node;
}


int main (void)
{
    STUDENT_LIST *head = NULL, *tmp;
    char choice;
    char opt;
    short position;
    short l_len;

    if ((tmp = create_node ()) == NULL)
    {
        printf ("Cannot create the head node\n");
        exit (1);
    }

    head = tmp;
    get_data (head);

    while (1)
    {
        printf ("\nKey in your choice i - insert d - delete s - show o - sort v - reverse q - quit :");
        scanf (" %c", &choice);
        if (choice == 'q')
            break;
        switch (choice)
        {
            case 'i':	// Insert a node
                printf ("Position in the list to insert:");
                scanf (" %d", &position);
                l_len = GetListLength (head);
                if (position >= 0 && position <= l_len)
                {
                    /* 0 insert as the first node */
                    if ((tmp = create_node ()) == NULL)
                    {
                        printf ("Cannot create the new node\n");
                        exit (1);
                    }
                    get_data (tmp);
                    head = insert_node (head, tmp, position);
                }
                else 
                    printf ("Invalid position given\n");
            break;

            case 'd':  // Delete a node
                printf ("Node number to delete:");
                scanf ("%d", &position);
                l_len = GetListLength (head);
                if (position >= 0 && position <= l_len)
                    head = delete_node (head, position);
                else 
                    printf ("Invalid position given\n");
            break;

            case 's':  // Show the contents of all the nodes
                show_list (head);
            break;

            case 'o':  // Sort in ascending order of age
                sort_list (head);
            break;

            case 'v':
                 head = reverse_list (head);

            default:
            break;
        }
    }
    delete_list (head);
    return 0;
}
