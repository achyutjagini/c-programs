#include<stdio.h>

struct student
{
char name[20];
int roll,phy,math,elec,c,mech,total,average;
};
int input(struct student *v1);
int division(struct student v2);

int main()
{ int n,i;
struct student a[10];
printf("enter no of students");
scanf("%d",&n);
for(i=0;i<n;i++)
    input(&a[i]);
for(i=0;i<n;i++)    
   {printf("student %d has\n",i+1);
    division(a[i]);}
}

int input(struct student *v1)
{printf("enter name");
scanf("%s",v1->name);
printf("enter roll");
scanf("%d",&v1->roll);
printf("enter marks in phy,math,elec,c,mech");
scanf("%d %d %d %d %d",&v1->phy,&v1->math,&v1->elec,&v1->c,&v1->mech);
}
int division(struct student v2)
{   
    if(v2.phy<40)
       printf("fail in phy\n");
    else if(v2.phy>40)
       {printf("pass in phy\n");
        if(v2.phy>85)
           printf("FCD\n");
        else if (v2.phy>60&&v2.phy<85)
           printf("FC\n");
        else if(v2.phy>50&&v2.phy<59)   
           printf("SC\n");
        else if(v2.phy>50&&v2.phy<59)   
           printf("TC\n");  
       } 
    if(v2.math<40)
       printf("fail in math\n");
    else if(v2.math>40)
       {printf("pass in math\n"); 
         if(v2.math>85)
           printf("FCD\n");
        else if (v2.math>60&&v2.math<85)
           printf("FC\n");
        else if(v2.math>50&&v2.math<59)   
           printf("SC\n");
        else if(v2.math>50&&v2.math<59)   
           printf("TC\n");  
       }
 

    if(v2.elec<40)
       printf("fail in elec\n");
    else if(v2.elec>40)
       {printf("pass in elec\n"); 
        if(v2.elec>85)
           printf("FCD\n");
        else if (v2.elec>60&&v2.elec<85)
           printf("FC\n");
        else if(v2.elec>50&&v2.elec<59)   
           printf("SC\n");
        else if(v2.elec>50&&v2.elec<59)   
           printf("TC\n");  
       }
    if(v2.c<40)
       printf("fail in c\n");
    else if(v2.c>40)
       { printf("pass in c\n"); 
          if(v2.c>85)
           printf("FCD\n");
        else if (v2.c>60&&v2.c<85)
           printf("FC\n");
        else if(v2.c>50&&v2.c<59)   
           printf("SC\n");
        else if(v2.c>50&&v2.c<59)   
           printf("TC\n");  
       }


    if(v2.mech<40)
       printf("fail in mech\n");
    else if(v2.c>40)
       {printf("pass in mech\n"); 
        if(v2.mech>85)
           printf("FCD\n");
        else if (v2.mech>60&&v2.mech<85)
           printf("FC\n");
        else if(v2.mech>50&&v2.mech<59)   
           printf("SC\n");
        else if(v2.mech>50&&v2.mech<59)   
           printf("TC\n");  
}
}