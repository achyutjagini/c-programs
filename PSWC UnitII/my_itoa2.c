/*		my_itoa.c				*/

#include <stdio.h>

/* Function to find the length of a given string */
int my_strlen (char str[])
{
    int count;
	
    for (count = 0; str [count] != '\0'; count ++)
        ;
    return count;
}


// Function to reverse a string 
void my_strrev (char str[]) 	
{
    int n = my_strlen (str); 
    int i;
    char temp;
     
    // Swap character starting from two corners 
    for (i = 0; i < n / 2; i++) 
    {
        temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
} 

// Implementation of itoa() 
void itoa(int num, char str[]) 
{
    int i = 0; 
      
    /* Handle 0 explicitly, otherwise empty string is printed for 0 */
    if (num == 0) 
    { 
        str[i++] = '0'; 
        str[i] = '\0'; 
        return;
    } 
  
    // Process individual digits 
    while (num != 0) 
    { 
        int rem = num % 10; 
        str[i++] =  rem + '0'; 
        num = num/10; 
    } 
  
    str[i] = '\0'; // Append string terminator 
    // Reverse the string 
    my_strrev (str); 
} 
  
int main(void)
{ 
    char str[100]; 
    int num;

    printf ("Please key in a positive number:");
    scanf ("%d", &num);
    itoa (num, str);
    printf ("The converted string is %s\n", str);
    return 0; 
} 