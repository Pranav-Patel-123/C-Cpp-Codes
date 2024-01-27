#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next, *prev;
};
struct node *head = NULL;

void traverse()
{
    if(head == NULL){
    printf("\nList is Empty\n");
    return;
    }

    // else print the data
    struct node *ptr;
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->next;
    }
    printf("\n");
    
}

//Insert at front 
void insertAtFront()
{
    int data;
    struct node *newNode, *ptr;
    ptr = malloc(sizeof(struct node));
    printf("Enter the element to be inserted: ");
    scanf("%d",&data);
    ptr->info = data;
    ptr->next = head;
    ptr->prev = NULL;
    head = ptr;
}

//Insert at end
void insertAtEnd()
{
    int data;
    struct node *ptr , *trav;
    ptr = malloc(sizeof(struct node));
    ptr->prev = NULL;
    ptr->next = NULL;
    printf("Enter the element to be inserted: ");
    scanf("%d",&data);
    ptr->info = data;
    trav = head;

    if(head == NULL)
    {
        head = ptr;
    }

    //Changes Links
    else
    {
        while(trav->next != NULL)
            trav = trav->next;
        ptr->prev = trav;
        trav->next = ptr;
    }

}

//Insert at position
void insertAtPosition()
{
    int data,pos,i=1;
    struct node *newNode,*ptr;
    newNode = malloc(sizeof(struct node));
    newNode->next = NULL;
    newNode->prev = NULL;

    printf("Enter the position: ");
    scanf("%d",&pos);

    if(head == NULL)
    {
        head = newNode;
        newNode->prev=NULL;
        newNode->next=NULL;
    }

    else if (pos == 1)
    {
        insertAtFront();
    }
    else{
    printf("Enter the element to be inserted: ");
    scanf("%d",&data);
    newNode->info = data;
    ptr = head;
    while(i<pos-1)
    {
        ptr = ptr->next;
        i++;
    }
    newNode->next = ptr->next;
    newNode->prev = ptr;
    ptr->next->prev = newNode; 
    ptr->next = newNode;
    }  
    ptr = head;

}

//Delete from front of the list
void deleteFirst()
{
    struct node *ptr;
    if(head == NULL)
    printf("\nList is Empty\n");
    else 
    {
        ptr = head;
        head = head->next;
        if(head != NULL)
        head->prev = NULL;
        free(ptr);
    }
}

//Delete frrom end
void deleteLast()
{
    struct node *ptr;
    if(head == NULL)
    printf("\nList is Empty\n");
    ptr = head;
    while(ptr-> next != NULL){
        ptr = ptr->next;
    }
    if(head->next = NULL)
    head = NULL;
    else{
        ptr->prev->next = NULL;
        free(ptr);
    }
}

//Delete at position
void deleteAtPosition()
{
    int pos,i=1;
    struct node *ptr, *position;
    ptr = head;
    if(head == NULL)
    printf("\nList is Empty\n");

    else{
        printf("\nEnter the position to be deleted: ");
        scanf("%d",&pos);

        if(pos == 1){
        deleteFirst();
        if(head != NULL){
            head->prev = NULL;
        }
        free(position);
        return;
        }

        //Traverse till position
        while(i<pos-1){
            ptr = ptr->next;
            i++;
        }

        //Change Links 
        position = ptr-> next;
        if(position-> next != NULL){
            position->next->prev = ptr;
        }
        ptr->next = position->next;

        //Free memeory
        free(position);

    }
}

int main()
{
    int choice;
    while (1){
    printf("\n1. see the list\n");
    printf("2. insert at the beginning\n");
    printf("3. insert at the end\n");
    printf("4. insert at the position\n");
    printf("5. delete at the beginning\n");
    printf("6. delete at the end\n");
    printf("7. delete at the position\n");
    printf("8. exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        traverse();
        break;
        case 2:
        insertAtFront();
        break;
        case 3:
        insertAtEnd();
        break;
        case 4:
        insertAtPosition();
        break;
        case 5:
        deleteFirst();
        break;
        case 6:
        deleteLast();
        break;
        case 7:
        deleteAtPosition();
        break;
        case 8:
        exit(1);
        break;
        default:
        printf("\nInvalid choice\n");
        continue;
    }
    }
    return 0;
}