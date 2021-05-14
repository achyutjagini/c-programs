/* Problem:
Write a program that prompts for the user’s weekly pay in dollars and the
hours worked to be entered through the keyboard as floating-point values. The program should then calculate 
and output the average pay per hour in the following form:
Your average hourly pay rate is 7 dollars and 54 cents.
*/

#include <stdio.h>
int main (void)
{
    float weekly_pay, work_time, avg_pay;
    int dollars, cents;

    printf ("key in the total weekly pay:");
    scanf ("%f", &weekly_pay);

    printf ("key in the total hours worked:");
    scanf ("%f", &work_time);

    avg_pay = weekly_pay / work_time;   // the result will be a float, need to separate dollars and cents
    dollars = (int) avg_pay;

    cents = ((int) (100 * avg_pay)) % 100;
    printf ("Average hourly rate is %d dollars and %d cents\n", dollars, cents);
    return 0;
}
