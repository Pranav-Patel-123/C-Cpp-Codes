#define MAX 5
#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();
void peek();
int queue[MAX];
int front = -1;
int rear = -1;

void main()
{
  int choice;
  while (1)
  {
    printf("enter your choice from the following:\n1.insert   \n2.delete   \n3.peek    \n4.display   \n5.exit \n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
        enqueue();
        break;
      case 2:
        dequeue();
        break;
      case 3:
        peek();
        break;
      case 4:
        display();
        break;
      case 5:
        exit(0);
    }
  }
}

void enqueue()
{
  int x;
  printf("enter element: ");
  scanf("%d",&x);
  if(front == -1 && rear == -1)
  {
    front = rear = 0;
    queue[rear] = x;
  }
  else if((rear+1)%MAX == front)
  {
    printf("Overflow");
  }
  else
  {
    rear = (rear+1)%MAX;
    queue[rear]=x;
    // front++; 
  }
}

void dequeue()
{
  if(front == -1 && rear == -1)
    printf("Underflow");
  else if(front == rear)
    front = rear = -1;
  else
    printf("deleted element is %d\n",queue[front]);
    front = (front+1)%MAX;
    // front--;
}

void display()
{
  int i = front;
  if(front == -1 && rear == -1)
    printf("Underflow");
  else 
  {
    while (i != rear)
    {
      printf("%d ",queue[i]);
      i = (i+1)%MAX;
    }
    printf("%d ",queue[rear]);
  }
}

void peek()
{
  if(front == -1 && rear == -1)
    printf("Underflow");
  else 
    printf("element at the front is %d\n",queue[front]);
}