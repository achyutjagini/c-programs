typedef struct employee
{
int emp_id;
char name[20];
char department[20];   
}employee;
void read(employee *v1,int n);
void display (employee *v1,int n);