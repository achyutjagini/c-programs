#include <stdio.h>
     
    int main()
    {
      long array[100], *maximum, size, c, location = 1;
     
      printf("Enter the number of elements in array\n");
      scanf("%ld", &size);
     
      printf("Enter %ld integers\n", size);
     
      for ( c = 0 ; c < size ; c++ )
        scanf("%ld", &array[c]);
       
        printf("%ld\n", array); 
      printf("%p", maximum); 
     // maximum  = array;
    //  {printf("%ld",maximum);}
      //{printf("%ld",*maximum);}
     
    //  {printf("%ld",*array);}
    }