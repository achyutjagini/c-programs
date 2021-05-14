#include <stdio.h>

int main (void)
{
    //enum WDAY {MON,TUES,WED} w1;
    //const char ss [] = "saying";

    char ss [] = "saying";
    printf ("String is %s\n", ss);
    ss [2]='Y';
    printf ("String is %s\n", ss);
    return 0;
}
