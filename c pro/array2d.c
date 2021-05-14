#include<stdio.h> 
int main(void)
{
int arr[3][4];
int i, j;
printf("Enter array elements"); 
for(i = 0; i < 3;i++)
for(j = 0; j < 4; j++) 
scanf("%d", &arr[i][j]);

for(i = 0; i < 3; i++)
for(j = 0; j < 4; j++)
printf("%d\n", arr[i][j]);
}