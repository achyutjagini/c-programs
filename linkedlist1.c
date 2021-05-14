//program to create linked list and print items of list
#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
}*head;//head points to first node

void create(int n);
void display();
void insert(int data);
int main()
{ 
    int n;
printf("enter no of nodes");
scanf("%d",&n);
    create(n);
    display();
    insert(10);
    display();
}

void create(int n)
{int i;
struct node *newNode,*temp;
head=(struct node*)malloc(sizeof(struct node));//head assigned random memory
int data;
printf("enter data of node 1");
scanf("%d",&data);
head->data=data;
head->next=NULL;
 
 temp=head;//temp and head both point to first node now
 for(i=2; i<=n; i++)
    {   newNode = (struct node *)malloc(sizeof(struct node));

            /* If memory is not allocated for newNode */
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; // Link the data field of newNode with data
                newNode->next = NULL; // Link the address field of newNode with NULL

                temp->next = newNode; //temp-first node next points to second node in 1st iteration
                temp =temp->next;// temp moves to second node 
               //temp=(*temp).next 
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
void display()
{
    struct node *temp;

    /*
     * If the list is empty i.e. head = NULL
     */
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); // Print data of current node
            temp = temp->next;                 // Move to next node
        }
    }
}
void insert(int data)
{
struct node *newnode,*temp;
temp=head;

newnode=(struct node*)malloc(sizeof(struct node));
temp=temp->next;
newnode->data=data;
while(temp!=NULL)
{temp=temp->next;
}
}

