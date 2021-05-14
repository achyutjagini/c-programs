/* Problem:
Write a C program to accept the radius of a circle and calculate and print the diameter, perimeter and area of the circle. 
Restrict the number of digits after decimal point to 2.
*/
#define PI    (float)22/7
#include <stdio.h>
int main (void)
{
    float radius, dia, perimeter, area;
    
    printf ("Key in the radius of the circle:");
    scanf ("%f", &radius);

    dia = 2 * radius;
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;
    printf ("radius = %.2f Diameter = %.2f Perimeter = %.2f Area = %.2f\n", 
             radius, dia, perimeter, area);
    return 0;
}
