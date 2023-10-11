#include <stdio.h>
#include <conio.h>

int front = -1;
int rear = -1;
int queue[5];
int main()
{
    int n;
    int ch;
    while (1)
    {
        printf("1. insert \n 2.deletion \n 3.display \n 4.exit \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("enter number to insert : ");
            scanf("%d", &n);
            enqueue(n);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("exit by choice \n");
            exit(0);
            break;

        default:
            printf("please choose the valid option");
            break;
        }
    }
        return 0;
   
}
    int enqueue(int n)
    {
        if (rear == 4)
        {
            printf("overflow");
        }
        else
        {
            if (front == -1)
            {
                front = 0;
            }
            rear++;
            queue[rear] = n;
        }
    }
    int dequeue()
    {
        if (front > rear)
        {
            printf("underflow");
        }
        else
        {
            front++;
        }
    }

    int display()
    {
        if (front == -1)
        {
            printf("queue is empty");
        }
        else
        {
            printf("queue is: \n");
            for (int i = front; i <= rear; i++)
            {
                printf(" %d \n", queue[i]);
            }
        }
    }