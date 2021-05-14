/*		student_list.h			*/
#define NAME_LEN 25
#define BRANCH_LEN  15

typedef struct student_list
{
    char name [NAME_LEN];
    char gender;
    short age;
    char branch [BRANCH_LEN];
    struct student_list *next;
} STUDENT_LIST;

STUDENT_LIST *reverse_list (STUDENT_LIST *v1);
void get_data (STUDENT_LIST *v1);
void show_list (STUDENT_LIST *v1);
STUDENT_LIST *delete_node (STUDENT_LIST *v1, short);
STUDENT_LIST *insert_node (STUDENT_LIST *v1, STUDENT_LIST *v2, short);
void delete_list (STUDENT_LIST *v1);
short GetListLength (STUDENT_LIST *v1);
void sort_list (STUDENT_LIST *v1);



