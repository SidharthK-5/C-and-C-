#include<stdio.h>

int top=-1;

void push(int B[]);
void pop(int B[]);
void display(int B[]);

int main()
{
    int option, A[20];
    while (1)
    {
        printf("\nEnter option\n");
        printf("1. Push   2. Pop   3. Display   4. Exit\n");
        scanf("%d", &option);
        if (option == 1)
            push(A);
        else if (option == 2)
            pop(A);
        else if (option == 3)
            display(A);
        else if (option == 4)
            break;
        else
            printf("Invalid Input!!!");
    }
    return 0;
}

void push(int B[])
{
    int data;
    if (top == 19)
    {
        printf("Stack overflow!!!\n");
        return;
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &data);
        top++;
        B[top] = data;
    }
}

void pop(int B[])
{
    int data;
    if (top == -1)
    {
        printf("Stack underflow!!!\n");
        return;
    }
    else
    {
        data = B[top];
        printf("%d removed", data);
        top--;
    }
}

void display(int B[])
{
    int i;
    if (top == -1)
    {
        printf("Stack underflow!!!\n");
        return;
    }
    else
    {
        for (i=top; i>=0; i--)
            printf("%d ", B[i]);
        printf("\n");
    }
}