/*			utils_list.c		*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student_list.h"

/* Function to reverse the linked list */
STUDENT_LIST *reverse_list(STUDENT_LIST *p_head) //means STUDENT_LIST *p_head=head which means p_head=head
{ 
    STUDENT_LIST *prev = NULL; 
    STUDENT_LIST *current_node = p_head; //current_node=head
    STUDENT_LIST *the_next = NULL; 
    while (current_node != NULL) 
    { 
        // Store next 
        the_next = current_node->next; 
  
        // Reverse current node's pointer 
        current_node->next = prev; // 1st node next points to null 
  
        // Move pointers one position ahead. 
        prev = current_node; 
        current_node = the_next; 
    } 
    p_head = prev; //head is now the last node 
    return p_head;
} 




/* function to swap data of two nodes first and second */
void swap_data(STUDENT_LIST *first, STUDENT_LIST *second) 
{ 
    STUDENT_LIST s_student;
    
    s_student.gender = second->gender;
    s_student.age = second->age;
    strcpy (s_student.name, second->name);
    strcpy (s_student.branch, second->branch);
    second->gender = first->gender ;
    second->age = first->age ;
    strcpy (second->name, first->name);
    strcpy (second->branch, first->branch);

    first->gender = s_student.gender ;
    first->age = s_student.age ;
    strcpy (first->name, s_student.name);
    strcpy (first->branch,s_student.branch);
} 

/* Bubble sort the given linked list */
void sort_list(STUDENT_LIST *head) 
{ 
    int swapped; 
    STUDENT_LIST *ptr1 = head; 
    STUDENT_LIST *lptr = NULL; 
  
    do
    { 
        swapped = 0; 
        ptr1 = head; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->age > ptr1->next->age) 
            {  
                swap_data(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
} 

/* Free memory allocated to all the nodes of the list */
void delete_list (STUDENT_LIST *p_head)
{
    STUDENT_LIST *p_mem;

    for (p_mem = p_head; p_mem != NULL; p_mem = p_mem -> next)
        free (p_mem);
}

// Get the length (number of nodes) of the list
short GetListLength (STUDENT_LIST *p_head)
{
    short list_len = 0;
    STUDENT_LIST *ptemp;

    for (ptemp = p_head; ptemp != NULL; list_len ++, 
                        ptemp=ptemp->next);
    return list_len;
}

/* Insert a mode at the given position */
STUDENT_LIST *insert_node (STUDENT_LIST *p_head, STUDENT_LIST *p_mem, short position)
{
    STUDENT_LIST *p_temp,*p_prev = NULL;
    short tmp;
    short l_len = GetListLength (p_head);
    
    if (position == 0)
    {
        p_mem->next = p_head;
        p_temp = p_mem;
    }
    else if (position == l_len)
    {
         for (p_temp = p_head; p_temp != NULL;
                  p_prev=p_temp,p_temp=p_temp->next);
         p_prev->next = p_mem;
         p_mem->next = NULL;
         p_temp = p_head;
   }

    else
    {

        for (p_temp = p_head, tmp = 0; p_temp != NULL;
                  tmp++, p_prev=p_temp,p_temp=p_temp->next)
        {
            if (tmp == position)
            {
                p_prev->next = p_mem;
                p_mem->next = p_temp;
                break;
            }
        }
        
        p_temp=p_head;
     }

    return p_temp;
} 

/* Delete a node at the given position */
STUDENT_LIST *delete_node (STUDENT_LIST *p_head, short position)
{
    STUDENT_LIST *p_temp, *p_prev=NULL;
    short tmp;
    short l_len = GetListLength (p_head);

    if (position == 0)
    {
        p_temp=p_head->next;
        free (p_head);
    }
    else
    {
        for (p_temp = p_head, tmp = 0; p_temp != NULL;
                  tmp++, p_prev=p_temp,p_temp=p_temp->next)
        {
            if (tmp == position)
            {
                p_prev->next = p_temp->next;
                free (p_temp);
            }
        }
        p_temp=p_head;
     }
    return p_temp;
}


/* Get the data for each student record from the user */
void get_data (STUDENT_LIST *p_student)
{
    printf ("Key in the name of the student:");
    scanf ("%s", p_student->name);
    printf ("Key in the gender 'm' or 'f':");
    scanf (" %c", &p_student->gender);
    printf ("Key in the age:");
    scanf ("%d", &p_student->age);
    printf ("Key in the name of the branch:");
    scanf ("%s", p_student->branch);
}

/* Display the content of the list (student record details) */
void show_list (STUDENT_LIST *p_head)
{
    STUDENT_LIST *p_ele;

    for (p_ele = p_head; p_ele != NULL; p_ele = p_ele -> next)
    {
        printf ("Name of the student is %s\n", p_ele->name);
        printf ("Gender is %s\n", p_ele->gender == 'm'? "Male":"Female");
        printf ("Age is %d\n", p_ele->age);
        printf ("Branch is %s\n", p_ele->branch);
    }
}

