/* A simple C program to create a linked list of three elements. */
/* Also demonstartes the printing of elements in the list. */
#include<stdio.h>
#include <stdlib.h>
struct list {

       int data;          //stores data
       struct list *next; //stores a ponter to next element
};
struct list *head=NULL /* always points to the start of the list */, 
       *p /* a temporary pointer to hold address of new element */,
       *q /* a temporary pointer to traverse the list */;
int i     /* loop control variable */;
void insertEle(int x, int pos); //Function to add an alement in a random list
int main()
  {
    printf("Enter 3 elements seperated by space (e.g. 1 2 3 (press enter) "); 
    for (i=0;i<3;i++)
      {
         p=(struct list*) malloc(sizeof(struct list));
         scanf("%d",&p->data);
         p->next=NULL;
         if (head==NULL) //the first element of the list
            head=p;
         else
            { //the list has some elements
               q=head;
               while(q->next!=NULL)
                  q=q->next;
               q->next=p;   
            }   
      };//end of for(i)   
     q=head;
     printf("\nThe list is. ");
     while(q!=NULL)
       {
         printf("%d --> ",q->data);
         q=q->next;
       }//loop to print data 
     printf("\n");
    //Add element at the begining //
     insertEle(15,1);  //call the function to add element 
     q=head;
     printf("\nThe new list is (15 added at the begining place). ");
     while(q!=NULL)
       {
         printf("%d --> ",q->data);
         q=q->next;
       }//loop to print data 
     //add element in middle (3rd place)
     printf("\n");
     insertEle(20,3);  //call the function to add element 
     q=head;
     printf("\nThe new list is (20 added in 3rd place). ");
     while(q!=NULL)
       {
         printf("%d --> ",q->data);
         q=q->next;
       }//loop to print data 
    printf("\n");
    //add element in the end 
     printf("\n");
     insertEle(25,6);  //call the function to add element 
     q=head;
     printf("\nThe new list is (25 added at the end). ");
     while(q!=NULL)
       {
         printf("%d --> ",q->data);
         q=q->next;
       }//loop to print data 
    printf("\n");
  }//end of main()

void insertEle(int x, int pos)
  {
    struct list *p /*hold the address of newly created element*/, 
                *q /*temporary ponter to traverse the list */;
    p=(struct list*) malloc(sizeof(struct list)); //create a node
    p->data=x;       //place the data (x) in the node
    p->next=NULL;            
   if(pos==1)
       { //element is inserted in the begining
         p->next=head;
         head=p; //
       }
   else
     { //inserting the element at any random position including end
       q=head;
       int i=1;
       while(i<pos-1)
         {//move 'q' to add element
            q=q->next;
            i=i+1;
         }//end while
       p->next=q->next;
       q->next=p;  
     } //end else
  }





















