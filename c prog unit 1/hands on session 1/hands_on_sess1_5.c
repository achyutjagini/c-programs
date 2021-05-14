/* Problem:
Using only getchar() function to read from the keyboard, write a program in C to read in four numbers (digits) 
from keyboard and form and print an integer made up of these 4 digits.
*/

#include <stdio.h>
/* Use this as an example of a user-defined function */
void flush_input (void)
{
    while (getchar () != '\n');
}

int main (void)
{
    int dig1, dig2, dig3, dig4;
    int number;

    printf ("Key in the first digit");
    dig1 = getchar ();
    dig1 -= '0';		// To get the corresponding digit
    flush_input ();		// Clear the keyboard buffer
    printf ("Key in the second digit");
    dig2 = getchar (); 
    dig2 -= '0';
    flush_input ();
    printf ("Key in the third digit");
    dig3 = getchar (); 
    dig3 -= '0';
    flush_input();
    printf ("Key in the fourth digit");
    dig4 = getchar ();
    dig4 -= '0';

    number = dig1;
    number *= 10;
    number += dig2;
    number *= 10;
    number += dig3;
    number *= 10;
    number += dig4;

    printf ("The number is %d\n", number);
    return 0;
}
