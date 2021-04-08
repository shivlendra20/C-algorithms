#include<stdio.h>

#define MAX 100
int stack[MAX],item,top = -1,choice;
void push();
void pop();
void traverse();
void main()
{
    printf("operations: \n");
    printf("PUSH \n");
    printf("POP \n");
    printf("TRAVERSE \n");
    printf("wrong choice \n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: push();
                break;

        case 2: pop();
                break;

        case 3: traverse();
                break;

        default: printf("wrong choice");
    }
}
void push()
{
    if(top <= MAX)
    {
        printf("Enter the number: ");
        scanf("%d", &item);
        stack[top++] = item;
    }
    else
    {
        printf("Stack overflow");
    }
}
void pop()
{
    if(top >= 0)
    {
        item = stack[top--];
        printf("no. is deleted");
        return item;
    }
    else
    {
        printf("stack underflow");
    }
}
void traverse()
{
    if(top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        for(int i=top; i>=0; i++)
        {
            printf("\n%d", stack[i]);
        }
    }
}
