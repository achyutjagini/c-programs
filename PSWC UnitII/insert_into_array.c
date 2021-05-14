// Program to insert an element into an array

#include <stdio.h>
     
int main(void)
{
   int array[100], position, c, n, value;
     
   printf("Enter number of elements in array:");
   scanf("%d", &n);
     
   printf("Enter %d elements: ", n);
     
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
     
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);
     
   printf("Enter the value to insert:");
   scanf("%d", &value);
     
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
  
     
   printf("Resultant array is\n");
     
   for (c = 0; c <= n; c++)
      printf("%d  ", array[c]);
     
   return 0;
}
