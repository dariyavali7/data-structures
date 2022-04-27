#include<stdio.h>
int  a[20]; //array of integers, maximum 20 elements
void addElement(int x, int pos, int n); /* . */
void delElement(int pos,int n); /* . */
void printElement(int n);       /* function to print elements of the array */
void readElement(int n);        /* Read elements into array */
int main()
   {
     readElement(4); //enter 4 elements
     printElement(4); //print all element
     addElement(6,3,4); //adding
     printElement(5); //print array
   };
void readElement(int n) //n=number of elemnts to be inerted
   {
      for(int i=0;i<n;i++)
        scanf("%d",&a[i]);   
   };
void printElement(int n)
  {
      for(int i=0;i<n;i++)
        printf("%d ",a[i]);
      printf("\n");     
  }//end printElement()   
void addElement(int x, int pos,int n)
   {
    for(int i=n-1;i>=pos-1;i--)   
        a[i+1]=a[i];  
    a[pos-1]=x;
   }//end of 
void delElement(int pos, int n)
  {
    int x=a[pos-1];
    for(int i=n;i<pos-1;i--)   
       a[i-i]=a[i];
  }//end delElement() 