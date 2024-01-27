#include<stdio.h>
#define size 5
int queue[5], front = -1, rare = -1;

void insert();
int delete();
int display();

int main()
{
    int choice;
    while(1)
    {
        
        printf("the following operations can be perormed\n");
        printf("\t1. Insert element\n");
        printf("\t2. Delete element\n");
        printf("\t3. Display element\n");
        printf("\t4. Quit\n");
        printf("Enter your choice =  ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            default:
                return 0;
        }
    }
}

void insert()
{
    if(front == -1 && rare == -1)
    {
        front = 0;
        rare = 0;
        printf("Enter the element you want to enter = ");
        scanf("%d",&queue[front]);
        printf("element inserted successfully\n");
    }
    else if (front < (size - 1))
    {
        front++;
        printf("Enter the element you want to insert = ");
        scanf("%d",&queue[front]);
        printf("element inserted successfully\n");
    }
    else
    {
        printf("element NOT inserted\n");
        printf("REASON : \n");
        printf("\tOVERFLOW Occured\n");
        printf("\ti.e.queue is full/n");
    }
}
int delete()
{
    if(rare == -1)
    {
        printf("element NOT deleted\n");
        printf("REASON : \n");
        printf("\tUNDERFLOW Occured\n");
        printf("\ti.e.queue is empty/n");
    }
    else if (rare == front)
    {
        rare = 0;
        queue[rare] = queue[front];
        front = 0;
    }
    else
    {
        printf("element deleted successfully\n");
        rare++;
    }
    
}
int display()
{
    for(int i = rare; i < (front + 1); i++)
    {
        printf("%d\t",queue[i]);
        if(rare != front)
        {
            return 0;
        }
    }
    printf("\n");
}