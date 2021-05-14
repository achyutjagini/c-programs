#include <stdio.h>

int main (void)
{
    float fl = 0.0;
    int i, count = 0;

    i = (int) fl;
    for (fl = 0.0; i != 2; fl += 0.1, i = (int) fl, count ++)
        printf ("fl is %f\n", fl);
    printf ("Count is %d\n", count);
    return 0;
}

