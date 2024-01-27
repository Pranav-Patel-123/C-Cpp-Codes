#include<stdio.h>
#define size 5
int queue[5], front = -1, rare = -1;

void insertFRONT();
void insertRARE();
void deleteFRONT();
void deleteRARE();
void display();

int main()
{
    int choice;
    while(1)
    {
        
        printf("the following operations can be perormed\n");
        printf("\t1. Insert element from front end\n");
        printf("\t2. Delete element from front end\n");
        printf("\t3. Insert element from rare end\n");
        printf("\t4. Delete element from rare end\n");
        printf("\t5. Display element\n");
        printf("\t6. Quit\n");
        printf("Enter your choice =  ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                insertFRONT();
                break;
            case 2:
                deleteFRONT();
                break;
            case 3:
                insertRARE();
                break;
            case 4:
                deleteRARE();
                break;
            case 5:
                display();
                break;
            default:
                return 0;
        }
    }
}

void insertFRONT()
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
void deleteFRONT()
{
    if(front == -1)
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
        front--;
    }
    
}
void insertRARE()
{
    if(rare == -1 && front == -1)
    {
        front = 0;
        rare = 0;
        printf("Enter the element you want to enter = ");
        scanf("%d",&queue[rare]);
        printf("element inserted successfully\n");
    }
    else if (rare < (size - 1))
    {
        rare--;
        printf("Enter the element you want to insert = ");
        scanf("%d",&queue[rare]);
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
void deleteRARE()
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
        front = 0;
        queue[front] = queue[rare];
        rare = 0;
    }
    else
    {
        printf("element deleted successfully\n");
        rare++;
    }
    
}
void display()
{
    for(int i = rare; i < (front + 1); i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}