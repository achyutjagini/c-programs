#include <stdio.h>
int gp(int i)
{
if (i==0)
   return 1;
else
   return 5*gp(i-1);
}
int main()
{int i;
for(i=0;i<5;i++)
   {
     printf("%d\n",gp(i));

   }

}