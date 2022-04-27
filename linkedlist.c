#include<iostream>
struct list {
    int data;
    struct list *next;
};
void insertData(struct list *head, int x)
   {
     struct list *temp, *p,*prev=NULL;
     p=(struct list*) malloc(sizeof(struct list));
     p->data=4;
     p->next=NULL;
     temp=head;
     while(temp->data > p->data)
        {
         prev=temp;
         temp=temp->next;
        }  
    prev->next=temp;
    p->next= temp;    
   };
void main()
   {
       
 }