#include<stdio.h>

int front = 0;
int rear = -1;

void enqueue (int B[]);
void dequeue (int B[]);
void display (int B[]);

int main()
{
    int option, A[5];
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
        printf("front=%d, rear=%d", front, rear);
    }
    return 0;
}

void enqueue (int B[])
{
    int data;
    if ((rear+1)%5 == front && rear != -1)
    {
        printf("Queue is full!!!\n");
        return;
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &data);
        rear = (rear+1) % 5;
        B[rear] = data;
    }
}

void dequeue (int B[])
{
    int data;
    if (rear == -1)
    {
        printf("Queue is empty!!!\n");
        return;
    }
    else if (rear == front)
    {
        data = B[front];  // same as data = B[rear]
        printf("%d is removed\n", data);
        rear = -1;
        front = 0;
    }
    else
    {
        data = B[front];
        front = (front+1) % 5;
        printf("%d is removed\n", data);
    }
}

void display (int B[])
{
    if (rear == -1)
    {
        printf("Queue is empty!!!\n");
        return;
    }
    else
    {
        int i;
        if (rear == front)
            printf("%d", B[front]);
        else if (rear > front)
        {
            for (i=front; i<=rear; i++)
            {
                printf("%d ", B[i]);
            }
        }
        else
        {
            i = front;
            bool crossing_flag = 0;
            while (1)
            {
                printf("%d ", B[i]);
                i++;
                if (i==5)
                {
                    i = rear;
                    crossing_flag = 1;
                    printf("%d ", B[i]);
                    break;
                }
                else if (i==front && crossing_flag==1)
                {
                    break;
                }
            }
        }
        printf("\n");
    }
}