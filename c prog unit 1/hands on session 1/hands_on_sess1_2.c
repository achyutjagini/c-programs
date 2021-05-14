/* Problem:
Write a C program to convert specified days into years, weeks and days. 
Note: Ignore leap year.
*/
#include <stdio.h>
int main (void)
{
    int total_days;
    int years, weeks, days, temp;

    printf ("Key in the total number of days:");
    scanf ("%d", &total_days);
  
    years = total_days / 365;
    temp = total_days % 365;

    weeks = temp / 7;

    days = temp % 7;
   
    printf ("Years = %d Weeks = %d Days = %d\n", years, weeks, days);
    return 0;
}
