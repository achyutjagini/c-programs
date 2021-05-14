#include<stdio.h>
#include<ctype.h>
int main()
{int i,j,n,swap,temp;
 int a[50];
 FILE *fp;char ch;
 fp=fopen("ip.txt","r");
 ch=fgetc(fp);
 n=ch-'0'; i=0;
 while((ch=fgetc(fp))!=EOF)
  {
    if(isdigit(ch))
      a[i++]=ch-'0';
   }
 
 /*printf("enter the number of elements");
scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);*/
 //bubble sort
  i=0;
  swap=1;
 while(i<n-1 && swap==1)
   {
     swap=0;
     for(j=0;j<n-i-1;j++)
      if(a[j]>a[j+1])
       {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
         swap=1;
       }
     i++;
    }
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
 }
