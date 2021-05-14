/* Program to find the highest number in the array */

#include <stdio.h>
     
int main(void)
{
  int array[100], maximum, size, c, location = 1;
  printf("Enter the number of elements in array:");
  scanf("%d", &size);
     
  printf("Enter %d integers\n", size);
     
  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);
     
  maximum = array[0];
     
  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }
     
  printf("Maximum element is present at location number %d and it's value is %d.\n", 
				location, maximum);
  return 0;
}
  