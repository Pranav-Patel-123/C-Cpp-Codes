#include <stdio.h>
#include<stdlib.h>

# define SIZE 100

void enqueue();
void dequeue();
void show();
int peek();
int arr[SIZE];
int rear = - 1;
int front = - 1;


int main()
{
    int ch;
    while (1)
    {
        printf("\n1.Enqueue \n");
        printf("2.Dequeue \n");
        printf("3.Display the Queue\n");
        printf("4.Peek\n");
        printf("5.Quit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            peek();
            break;
            case 5:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    } 
} 
 
void enqueue()
{
    int value;
    if (rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (front == - 1)
      
        front = 0;
        printf("Element to be inserted in the Queue : \n");
        scanf("%d", &value);
        rear = rear + 1;
        arr[rear] = value;
    }
} 
 
void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", arr[front]);
        front = front + 1;
    }
} 
 
void show()
{
    
    if (front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = front; i <= rear; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
}

int peek()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow");
        printf("Queue is empty");
    }
    else
    { 
        printf("front element is %d\n",arr[front]);
    }
}