#include<stdio.h>
#include<conio.h>
 
int top = -1;
int stack[5];
int main()
{
    int n;
    int ch;
    while (1)
    {
    printf("1. insert \n 2.deletion \n 3.display \n 4.exit \n");
    scanf("%d", &ch );

    switch (ch)
    {
    case 1: printf("enter number to insert : ");
    scanf("%d",&n);
    push(n);
    break;
    
    case 2: 
    pop();
    break;

    case 3: 
    display();
    break;

    case 4: 
    printf("exit by choice \n");
    exit(0);
    break;
  

    default: printf("please choose the valid option");
    break;
    }
};
 
    return 0;
}
 int push(int n)
   {
     if (top==5)
     
     {
      printf("stack is full");
     }
     else {
        top++;
       stack[top] = n;
     }
   }

int pop(){
      top--;
    
}

int display()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else { 
         printf("stack is : \n");
        for (int i=top; i>=0 ;i--)
        {
            printf(" %d ",stack[i]);
        }
        printf("\n");
    }
}