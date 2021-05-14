/* Program to find the number of bits set to 1 in a given unsigned integer */
#include <stdio.h>

unsigned int find_ones (unsigned int number)
{
    int count = 0;

    while (number)
    {
        if (number & 1)
            count ++;
        number >>= 1;
    }
    return count;
}

unsigned int find_zeros (unsigned int number)
{
    int count = 0;

    while (number)
    {
        if (number & 1)
            count ++;
        number >>= 1;
    }
    return (sizeof (int) * 8 - count);
}


int main (void)
{
    unsigned int number;

    printf ("Key in a positive integer:");
    scanf ("%u", &number);
    printf ("Number of bits set to 1 in %u is %u\n", number, find_ones (number));
    printf ("Number of bits set to 0 in %u is %u\n", number, find_zeros (number));
   
    return 0;
}
