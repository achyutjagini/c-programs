#include <stdio.h>

// recursive function that returns the reverse of digits 
int rev(int n, int temp) 
{ 
    // base case 
    if (n == 0) 
        return temp; 
  
    // stores the reverse of a number 
    temp = (temp * 10) + (n % 10); 
  
    return rev(n / 10, temp); 
} 
  

int main(void) 
{ 
  
    int num;

    printf ("Key in a number:");
    scanf ("%d", &num); 
      
    int temp = rev(num, 0); 
    
    if (temp == num) 
        printf ("Number %d is a Palindrome\n", num);
     else
        printf ("Number %d is not a Palindrome\n", num);
    return 0; 
} 