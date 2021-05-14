typedef struct student
{
int rollno;
char name[20];
int marks;   
}STUDENT;
void read(STUDENT *v1,int n);
void display (STUDENT *v1,int n);
void sort(STUDENT *v1,int n);