#include<stdio.h>
//int  a[20];
int  stack[20];
//int n=0;
int tos=0; //tos top of stack
//void addElement(int x); /* . */
void push(int x); /* . */
//int  delElement(); /* . */
int  pop(); /* . */
//void printElement();       /* function to print elements of the array */
void printStack();       /* function to print elements of the array */
int main()
   {
    // addElement(6);
     push(6);
     push(5);
     push(4);
     printStack();
     
   };
void printStack()
  {
      for(int i=0;i<tos;i++)
        {
        printf(" %d \n",stack[i]); 
        }  
      printf("\n");  
  }//end printElement()   
void push(int x)
   {
       stack[tos]=x;  
       tos=tos+1;
   }//end of 
int pop()
  {
    int x=stack[tos];
    tos=tos-1;
    return(x);
  }//end delElement()   
  