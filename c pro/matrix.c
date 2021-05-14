#include<stdio.h>
int main()
{
int a[10][10],b[10][10],result[10][10];
int r1,c1,r2,c2=0;
int i,j,k,sum=0;
printf("enter rows and columns of 1st matrix");
scanf("%d%d",&r1,&c1);
  printf("enter elem of 1st\n");
for(i=0;i<r1;i++)
    for(j=0;j<c1;j++)
       {scanf("%d",&a[i][j]);}
printf("enter rows and columns of 2nd matrix");
scanf("%d %d",&r2,&c2);
if(c1!=r2)
{printf("no");}
else{
  
printf("enter elem of 2nd\n");
for(i=0;i<r2;i++)
    for(j=0;j<c2;j++)
       {scanf("%d",&b[i][j]);}

for(i=0;i<r1;i++)
    {
    for(j=0;j<c2;++j)
    {
    for(k=0;k<c1;++k)
    {
        sum+=a[i][k]*b[k][j];    
        
    }
    result[i][j]=sum;
    }
    }
   
for(i=0;i<r1;i++)
   { for(j=0;j<c2;j++)
{

    printf("%d\t",result[i][j]);
    
   }
printf("\n");

}

}
}

