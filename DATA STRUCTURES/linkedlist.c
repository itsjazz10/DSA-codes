#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
 
 struct linkedlist
 {
    int data;
    struct linkedlist *next;
 };
struct linkedlist *insertionatfirst(struct linkedlist *start,int data )
 {
     struct linkedlist *new;
    new = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    new->data= data;
    new->next= start;
    return new;
 }
 struct linkedlist *insertionatlast(struct linkedlist *start, int data )
{
    struct linkedlist *last;
    last = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    last->data= data;
    struct linkedlist *temp = start;
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next= last;
    last->next= NULL;
    return start;
}
struct linkedlist *insertionatposition(struct linkedlist *start, int data, int n )
{   
     struct linkedlist *new;
  new = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    new->data= data;
    
    struct linkedlist *temp = start;
    int i=0;
    while(i!=n-1)
    {
        temp= temp->next;
        i++;
    }
    new->next = temp->next;
    temp->next = new;
    return start;
}

 void linkedListTraversal(struct linkedlist *a)
 {
    while(a!=NULL)
    {
        printf(" %d ",a->data);
        a = a->next;
    }
 }
int main()
{
    struct linkedlist *head;
    head = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    head->data=3;
    head->next= NULL;
  head=  insertionatfirst(head,23);
  head=  insertionatfirst(head,2);
  head=  insertionatfirst(head,3);
   head= insertionatfirst(head,33);
    insertionatposition(head,44,3);
    insertionatlast(head,55);
    insertionatlast(head,65);
   insertionatposition(head,4,5);
    linkedListTraversal(head);
    return 0;
}