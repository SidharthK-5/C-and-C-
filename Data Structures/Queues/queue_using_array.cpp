#include<stdio.h>

int front = 0;
int rear = -1;

void enqueue (int B[]);
void dequeue (int B[]);
void display (int B[]);

int main()
{
    int option, A[20];
    while (1)
    {
        printf("\nEnter option\n");
        printf("1. Enqueue   2. Dequeue   3. Display   4. Quit\n");
        scanf("%d", &option);
        if (option == 1)
            enqueue(A);
        else if (option == 2)
            dequeue(A);
        else if (option == 3)
            display(A);
        else if (option == 4)
            break;
        else
            printf("Invalid Input!!!\n");
    }
    return 0;
}

void enqueue(int B[])
{
    int data;
    if (rear < 19)
    {
        rear++;
        printf("Enter value: ");
        scanf("%d", &data);
        B[rear] = data;
    }
    else
    {
        printf("Queue full!!!\n");
        return;
    }
}

void dequeue (int B[])
{
    int data;
    if (front > rear)
    {
        printf("Queue empty!!!\n");
        return;
    }
    else
    {
        data = B[front];
        front++;
        printf("%d is removed", data);
    }
}

void display (int B[])
{
    if (front > rear)
    {
        printf("Queue empty!!!\n");
        return;
    }
    else
    {
        for (int i=front; i<=rear; i++)
            printf("%d ", B[i]);
    }
}