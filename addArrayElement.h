#include <stdio.h>
void sampleFunc()
   {
    printf("Test ....... \n");
   }//end of sampleFun()

void addElement(int *Array,int pos,int ele)
   {
      int i; /* loop control variable */
      Array[pos]=ele;   
      printf("\nElement %d is added in position %d of the array.\n",ele,pos+1);
   }//end addElement()