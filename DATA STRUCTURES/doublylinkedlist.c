#include<stdio.h>
#include<conio.h>
struct doublylinkedlist
{
    struct doublylinkedlist *prev;
    int data;
    struct doublylinkedlist *next;
};
struct doublylinkedlist *insertionatfirst(struct doublylinkedlist *start,int data )
 {
     struct doublylinkedlist *new;
    new = (struct doublylinkedlist *)malloc(sizeof(struct doublylinkedlist));
    new->prev= NULL;
    new->data= data;
    new->next= start;
    return new;
 }
 struct doublylinkedlist *insertionatlast(struct doublylinkedlist *start, int data )
{
    struct doublylinkedlist *last;
    last = (struct doublylinkedlist *)malloc(sizeof(struct doublylinkedlist));
    last->data= data;
    struct doublylinkedlist *temp = start;
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }
    last->prev=temp;
    temp->next= last;
    last->next= NULL;
    return start;
}
struct doublylinkedlist *insertionatposition(struct doublylinkedlist *start, int data, int n )
{   
     struct doublylinkedlist *new;
  new = (struct doublylinkedlist *)malloc(sizeof(struct doublylinkedlist));
    new->data= data;
    
    struct doublylinkedlist *temp = start;
    int i=0;
    while(i!=n-1)
    {
        temp= temp->next;
        i++;
    }
    new->next = temp->next;
    new->prev= temp;
    temp->next = new;
    return start;
}
void linkedListTraversal(struct doublylinkedlist *a)
 {
    while(a!=NULL)
    {
        printf(" %d ",a->data);
        a = a->next;
    }
 }
int main()
{
    struct doublylinkedlist *head;
    head = (struct doublylinkedlist *)malloc(sizeof(struct doublylinkedlist));
    head->prev=NULL;
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