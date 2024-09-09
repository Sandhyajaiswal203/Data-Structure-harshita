#include <stdio.h>
#include <stdlib.h>
int top = -1;
int stack[100];
int n;
void push(int num1);
void pop();
void display();
int main()
{

    int a;
    while (1)
    {

        printf("\n\nPress any key :-)\n");
        printf("1 --> Insertion \n");
        printf("2 --> Deletion \n");
        printf("3 --> Display\n ");
        printf("4 --> Exit \n");
        printf("enter your choice :");
        scanf("%d", &a);
        int b;

        switch (a)
        {
        case 1:
            printf("\nenter the element you wnt to insert :");
            scanf("%d", &b);
            push(b);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);
            break;

        default:
            printf("Invalid Choice");
            break;
        }
    }
}
void push(int num1)
{
    if (top >= 100)
    {
        printf("stack is full");
    }
    top++;
    stack[top] = num1;
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty...");
    }
    else
    {
        printf("the element deleted is : %d", stack[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty...");
    }
    else
    {
        printf("Stack is --->");
        for (int i = 0; i <= top; i++)
        {
            printf("%d", stack[i]);
        }
    }
}