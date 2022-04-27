//creation of an array
#include<stdio.h>
int main()
{
int a[5],i,s=0;
printf("Enter the elements");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
s=s+a[i];
    }
printf("The values entered are:\n");
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
    }
    printf("\n");
printf("The sum is=%d",s);
   }