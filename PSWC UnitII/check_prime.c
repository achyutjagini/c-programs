#include <stdio.h>
#include <stdbool.h>

// Returns true if n is prime, else return false. 
// i is current divisor to check.  
bool isPrime(int num, int i = 2) 
{ 
    // Base cases 
    if (num <= 2) 
        return (num == 2) ? true : false; 
    if (num % i == 0) 
        return false; 
    if (i * i > num) 
        return true; 
  
    // Check for next divisor 
    return isPrime(num, i + 1); 
} 
  

int main(void) 
{ 
    int num;

    printf ("Key in a number:");
    scanf ("%d", &num);
    if (isPrime (num))
        printf ("%d is a prime number\n", num);
    else
        printf ("%d is not a prime number\n", num);
    return 0; 
} 