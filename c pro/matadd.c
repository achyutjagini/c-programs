#include <stdio.h>
int main()
{
int first[10][10][10],second[10][10][10],result[10][10][10];
int rows,columns,blocks;
int i,j,k;
printf("enter blocks of matrix");
scanf("%d",&blocks);
printf("enter rows of matrix");
scanf("%d",&rows);
printf("enter columns of matrix");
scanf("%d",&columns);

printf("enter elements of first matrix");
for(i=0;i<blocks;i++)
{
for(j=0;j<rows;j++)
{
for(k=0;k<columns;k++)
{
    scanf("%d",&first[i][j][k]);
}
}
}
printf("enter elements of second matrix");
for(i=0;i<blocks;i++)
{
for(j=0;j<rows;j++)
{
for(k=0;k<columns;k++)
{
    scanf("%d",&second[i][j][k]);

}
}
}

for(i=0;i<blocks;i++)
{
for(j=0;j<rows;j++)
{
for(k=0;k<columns;k++)
{
    result[i][j][k]=first[i][j][k]+second[i][j][k];

}
}
}

printf("result\n");
for(i=0;i<blocks;i++)
{
for(j=0;j<rows;j++)
{
for(k=0;k<columns;k++)
{
    printf("%d\t",result[i][j][k]);
}
printf("\n");
}
printf("\n");
}















    
}