#include <stdio.h>
int main()
{
    int rows, cal = 1, space, i, j;
 
    printf("Enter number of rows: ");//enter number of rows for generating the pascal triangle
    scanf("%d",&rows);
 
    for(i=0; i<rows; i++)            // outer loop for displaying rows
    {
        for(space=1; space <= rows-i; space++)  // space for every row starting
            printf("  ");
 
        for(j=0; j <= i; j++)     // inner loop for displaying the pascal triangle of numbers
        {
            if (j==0 || i==0)     // either outer loop value or inner-loop value is "0 " it prints 1
                cal = 1;
            else
                cal = cal*(i-j+1)/j;  //calculate the coefficient
 
            printf("%4d", cal);
        }
        printf("\n");
    }
 
    return 0;
}