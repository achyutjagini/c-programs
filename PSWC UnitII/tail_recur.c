#include <stdio.h>

void print (int n)
{
    if (n < 0)
        return;
    printf ("%d ", n);
    // The last executed statement is a recursive call
    print (n - 1);
}

int main (void)
{
    int num;

    printf ("Key in a number:");
    scanf ("%d", &num);
    print (num);
    return 0;
}
