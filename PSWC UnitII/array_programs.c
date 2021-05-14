Program to find biggest value among the given array.

    #include <stdio.h>
     
    int main(void)
    {
      int array[100], maximum, size, c, location = 1;
     
      printf("Enter the number of elements in array\n");
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
     
      printf("Maximum element is present at location number %d and it's value is %d.\n", location, maximum);
      return 0;
    }
     

// Minimum value in the array

#include <stdio.h>
 
main(void) 
{
    int array[100], minimum, size, c, location = 1;
 
    printf("Enter the number of elements in array\n");
    scanf("%d",&size);
 
    printf("Enter %d integers\n", size);
 
    for ( c = 0 ; c < size ; c++ )
        scanf("%d", &array[c]);
 
    minimum = array[0];
 
    for ( c = 1 ; c < size ; c++ ) 
    {
        if ( array[c] < minimum ) 
        {
           minimum = array[c];
           location = c+1;
        }
    } 
 
    printf("Minimum element is present at location number %d and it's value is %d.\n", location, minimum);
    return 0;
}


// Inserting into the array

    #include <stdio.h>
     
    int main(void)
    {
       int array[100], position, c, n, value;
     
       printf("Enter number of elements in array\n");
       scanf("%d", &n);
     
       printf("Enter %d elements\n", n);
     
       for (c = 0; c < n; c++)
          scanf("%d", &array[c]);
     
       printf("Enter the location where you wish to insert an element\n");
       scanf("%d", &position);
     
       printf("Enter the value to insert\n");
       scanf("%d", &value);
     
       for (c = n - 1; c >= position - 1; c--)
          array[c+1] = array[c];
     
       array[position-1] = value;
     
       printf("Resultant array is\n");
     
       for (c = 0; c <= n; c++)
          printf("%d\n", array[c]);
     
       return 0;
    }
     

// Deleting an element from the array
    #include <stdio.h>
     
    main(void)
    {
       int array[100], position, c, n;
     
       printf("Enter number of elements in array\n");
       scanf("%d", &n);
     
       printf("Enter %d elements\n", n);
     
       for ( c = 0 ; c < n ; c++ )
          scanf("%d", &array[c]);
     
       printf("Enter the location where you wish to delete element\n");
       scanf("%d", &position);
     
       if ( position >= n+1 )
          printf("Deletion not possible.\n");
       else
       {
          for ( c = position - 1 ; c < n - 1 ; c++ )
             array[c] = array[c+1];
     
          printf("Resultant array is\n");
     
          for( c = 0 ; c < n - 1 ; c++ )
             printf("%d\n", array[c]);
       }
     
       return 0;
    }
     

// Merge two arrays
    #include <stdio.h>
     
    void merge(int [], int, int [], int, int []);
     
    int main(void) 
{
      int a[100], b[100], m, n, c, sorted[200];
     
      printf("Input number of elements in first array\n");
      scanf("%d", &m);
     
      printf("Input %d integers\n", m);
      for (c = 0; c < m; c++) {
        scanf("%d", &a[c]);
      }
     
      printf("Input number of elements in second array\n");
      scanf("%d", &n);
     
      printf("Input %d integers\n", n);
      for (c = 0; c < n; c++) {
        scanf("%d", &b[c]);
      }
     
      merge(a, m, b, n, sorted);
     
      printf("Sorted array:\n");
     
      for (c = 0; c < m + n; c++) {
        printf("%d\n", sorted[c]);
      }
     
      return 0;
    }
     
    void merge(int a[], int m, int b[], int n, int sorted[]) {
      int i, j, k;
     
      j = k = 0;
     
      for (i = 0; i < m + n;) {
        if (j < m && k < n) {
          if (a[j] < b[k]) {
            sorted[i] = a[j];
            j++;
          }
          else {
            sorted[i] = b[k];
            k++;
          }
          i++;
        }
        else if (j == m) {
          for (; i < m + n;) {
            sorted[i] = b[k];
            k++;
            i++;
          }
        }
        else {
          for (; i < m + n;) {
            sorted[i] = a[j];
            j++;
            i++;
          }
        }
      }
    }
     

// Biggest value in the array using pointers



    #include <stdio.h>
     
    int main()
    {
      long array[100], *maximum, size, c, location = 1;
     
      printf("Enter the number of elements in array\n");
      scanf("%ld", &size);
     
      printf("Enter %ld integers\n", size);
     
      for ( c = 0 ; c < size ; c++ )
        scanf("%ld", &array[c]);
     
      maximum  = array;
      *maximum = *array;
     
      for (c = 1; c < size; c++)
      {
        if (*(array+c) > *maximum)
        {
           *maximum = *(array+c);
           location = c+1;
        }
      }
     
      printf("Maximum element is present at location number %ld and it's value is %ld.\n", location, *maximum);
      return 0;
    }
     

// Minimum element using pointers
#include <stdio.h>
 
main(void) 
{
    int array[100], *minimum, size, c, location = 1;
 
    printf("Enter the number of elements in array\n");
    scanf("%d",&size);
 
    printf("Enter %d integers\n", size);
 
    for ( c = 0 ; c < size ; c++ )
        scanf("%d", &array[c]);
 
    minimum = array;
    *minimum = *array;
 
    for ( c = 1 ; c < size ; c++ ) 
    {
        if ( *(array+c) < *minimum ) 
        {
           *minimum = *(array+c);
           location = c+1;
        }
    } 
 
    printf("Minimum element is present at location number %d and it's value is %d.\n", location, *minimum);
    return 0;
}


// Matrix multiplication


    #include <stdio.h>
     
    int main(void)
    {
      int m, n, p, q, c, d, k, sum = 0;
      int first[10][10], second[10][10], multiply[10][10];
     
      printf("Enter the number of rows and columns of first matrix\n");
      scanf("%d%d", &m, &n);
      printf("Enter the elements of first matrix\n");
     
      for (  c = 0 ; c < m ; c++ )
        for ( d = 0 ; d < n ; d++ )
          scanf("%d", &first[c][d]);
     
      printf("Enter the number of rows and columns of second matrix\n");
      scanf("%d%d", &p, &q);
     
      if ( n != p )
        printf("Matrices with entered orders can't be multiplied with each other.\n");
      else
      {
        printf("Enter the elements of second matrix\n");
     
        for ( c = 0 ; c < p ; c++ )
          for ( d = 0 ; d < q ; d++ )
            scanf("%d", &second[c][d]);
     
        for ( c = 0 ; c < m ; c++ )
        {
          for ( d = 0 ; d < q ; d++ )
          {
            for ( k = 0 ; k < p ; k++ )
            {
              sum = sum + first[c][k]*second[k][d];
            }
     
            multiply[c][d] = sum;
            sum = 0;
          }
        }
     
        printf("Product of entered matrices:-\n");
     
        for ( c = 0 ; c < m ; c++ )
        {
          for ( d = 0 ; d < q ; d++ )
            printf("%d\t", multiply[c][d]);
     
          printf("\n");
        }
      }
     
      return 0;
    }


// Program to check a prime number


    #include<stdio.h>
     
    main(void)
    {
       int iNumber, initial= 2;
     
       printf("Enter a number to check :\n");
       scanf("%d",&iNumber);
     
       for ( initial = 2 ; initial <= iNumber - 1 ; initial++ )
       {
          if ( iNumber%initial == 0 )
          {
             printf("%d is not a prime number.\n", iNumber);
         break;
          }
       }
       if ( initial == iNumber )
          printf("%d is prime number.\n", iNumber);
     
       return 0;
    }



// Sort the elements of an array
    /*
     * C program to accept N numbers and arrange them in an ascending order
     */

    #include <stdio.h>

    int main(void)
    {
        int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);

        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);

        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }

        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
        return 0;

}


