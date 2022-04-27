#include<stdio.h>
int main()
    {   //Start of the driver program
        int intArray[5],     /*array to hold input data/marks of students */
            i,j,             /*loop control variables */
            sumofElements=0; /*hold the result */
        printf("Enter 5 elements delimeted by space.\n");
        for(i=0;i<5;i++)    /*loop to scan elements in to the array */
            {
               scanf("%d",&intArray[i]);
               sumofElements=sumofElements+intArray[i]; /* adding elements of the array, */
            }//end of for(i)
       printf("The values entered are:\n");
       for(j=0;j<5;j++)                                 /* loop to print content of elements*/
            printf("%d ",intArray[j]);
        printf("\n");
        printf("The sum of elements is=%d \n",sumofElements);
   }//end of main()