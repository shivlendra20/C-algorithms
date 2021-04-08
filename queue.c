#include <stdio.h>

#define MAX 50
int queue_array[MAX];
int rear = - 1;
int front = - 1;

void main()
{
    enqueue(2);
    enqueue(5);
    enqueue(3);
    display();
    dequeue();
    display();
}
void enqueue(int x)
{
    if(rear == MAX-1)
    {
        printf("overflow");
    }
    else if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue_array[rear] = x;
    }
    else
    {
        rear++;
        queue_array[rear] = x;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("empty");
    }
    else if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        printf("%d", queue_array[front]);
        front++;
    }
}
void display()
{

    if (front == -1 && rear == -1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (int i = front; i < rear+1; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} /* End of display() */
