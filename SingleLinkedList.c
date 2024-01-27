#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node *next;
};

// Initialize the head of the linked list as NULL
struct node *head = NULL;

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(int value) {
    // Allocate memory for the new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at the beginning of the linked list.\n", value);
}

// Function to insert a node at the end of the linked list
void insertAtEnd(int value) {
    // Allocate memory for the new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    // If the list is empty, make the new node the head
    if(head == NULL) {
        head = newNode;
        printf("Inserted %d at the end of the linked list.\n", value);
        return;
    }
    // Traverse to the end of the list and insert the new node
    struct node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
   printf("Inserted %d at the end of the linked list.\n", value);
}

// Function to insert a node in between two nodes in the linked list
void insertInBetween(int value, int position) {
    // Allocate memory for the new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    // Traverse to the node before the given position
    struct node *temp = head;
    for(int i=1; i<position-1; i++) {
        if(temp == NULL) {
            printf("Invalid position.\n");
            return;
        }
        temp = temp->next;
    }
    // Insert the new node
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted %d at position %d in the linked list.\n", value, position);
}

// Function to delete the first node of the linked list
void deleteFromBeginning() {
    // If the list is empty, do nothing
    if(head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }
    // Delete the first node and make the next node the head
    struct node *temp = head;
    head = head->next;
    free(temp);
    printf("Deleted the first node of the linked list.\n");
}

// Function to delete the last node of the linked list
void deleteAtEnd() {
    // If the list is empty, do nothing
    if(head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }
    // If there is only one node in the list, delete it and set the head to NULL
    if(head->next == NULL) {
        free(head);
        head = NULL;
        printf("Deleted the last node of the linked list.\n");
        return;
    }
    // Traverse to the second last node in the list
    struct node *temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    // Delete the last node and set the next of second last node to NULL
    free(temp->next);
    temp->next = NULL;
    printf("Deleted the last node of the linked list.\n");
}

// Function to delete a node from between two nodes in the linked list
void deleteInBetween(int position) {
    // If the list is empty, do nothing
    if(head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }
    // Traverse to the node before the given position
    struct node *temp = head;
    for(int i=1; i<position-1; i++) {
        if(temp == NULL) {
            printf("Invalid position.\n");
            return;
        }
        temp = temp->next;
    }
    // Delete the node at the given position
    struct node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    free(deleteNode);
    printf("Deleted the node at position %d in the linked list.\n", position);
}

// Function to display the linked list
void display() {
    // If the list is empty, do nothing
    if(head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }
    // Traverse through the list and print each element
    struct node *temp = head;
    printf("elemnts are ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function to run the program
int main() {
    int choice=0, value, position;

    while(1) {
        printf("Enter your choice from the following:\n1 insert at the beginning\n2 insert at the end\n3 to insert in between\n");
        printf("4 delete from beginning\n5 delete at end\n6 delete in between\n");
        printf("7 display the linked list\n8 exit.\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
               printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                insertAtBeginning(value);
                break;
            case 2:
               printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 3:
               printf("Enter the position and value to be inserted: ");
                scanf("%d %d", &position, &value);
                insertInBetween(value, position);
                break;
            case 4:
                deleteFromBeginning();
                break;
            case 5:
                deleteAtEnd();
                break;
            case 6:
               printf("Enter the position of the node to be deleted: ");
                scanf("%d", &position);
                deleteInBetween(position);
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}