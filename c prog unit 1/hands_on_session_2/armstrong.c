/*
Write a program to print all Armstrong numbers between two numbers given by the user.

A positive integer is called an Armstrong number of order n if
abcd... = a power n + b power n + c power n + d power n + ...
*/

#include <stdio.h>
#include <math.h>

int main (void)
{
    int low, high, i, temp1, temp2, remainder, n = 0, result = 0;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d are: ", low, high);

    for(i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;

        // number of digits calculation
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }

        // result contains sum of nth power of its digits
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }

        // checks if number i is equal to the sum of nth power of its digits
        if (result == i) 
            printf("%d ", i);


        // resetting the values to check Armstrong number for next iteration
        n = 0;
        result = 0;

    }
    return 0;
}