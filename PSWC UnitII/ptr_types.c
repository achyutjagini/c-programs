#include <stdio.h>
#include <string.h>
int main (void)
{
    char ptr1 [40];
    char ptr2 [50];
    char ptr [60];
    char *tmp1;
    const char *tmp2;
    char const *temp2;
    const char *const temp3 = ptr;  
    
    strcpy (ptr1, "abcdefgh");
    strcpy (ptr2, "ABCDEFGH");
    strcpy (ptr, "123456");

    tmp1 = ptr1;
    printf ("tmp1 is %s\n", tmp1);
    tmp1 [3] = 'M';
    printf ("tmp1 is %s\n", tmp1);
    tmp1 = ptr2;
    printf ("tmp1 is %s\n", tmp1);
    tmp2 = ptr1;
    printf ("tmp2 is %s\n", tmp2);
//    tmp2 [3] = 'P';
    temp3 = ptr1;
//    temp3 = ptr2;
    return 0;
}
  
