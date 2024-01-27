#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node *next;
    struct node *prev;
};

// Initialize the head and tail of the linked list as NULL
struct node *head = NULL;
struct node *tail = NULL;

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(int value) {
    // Allocate memory for the new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    // If the list is empty, make the new node the head and tail
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        newNode->next = head;
        newNode->prev = tail;
    } else {
        // Insert the new node at the beginning of the list
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        // Set the previous of the tail to the new head
        tail->next = head;
        head->prev = tail;
    }
    //printf("Inserted %d at the beginning of the linked list.\n", value);
}

// Function to insert a node at the end of the linked list
void insertAtEnd(int value) {
    // Allocate memory for the new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    // If the list is empty, make the new node the head and tail
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        newNode->next = head;
        newNode->prev = tail;
    } else {
        // Insert the new node at the end of the list
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        // Set the next of the tail to the head
        tail->next = head;
        head->prev = tail;
    }
    //printf("Inserted %d at the end of the linked list.\n", value);
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
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
    //printf("Inserted %d at position %d in the linked list.\n", value, position);
}

// Function to delete the first node of the linked list
void deleteFromBeginning() {
    // If the list is empty, do nothing
    if(head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }
    // If there is only one node in the list, delete it and set the head and tail to NULL
    if(head == tail) {
        free(head);
        head = NULL;
        tail = NULL;
    } else {
        // Delete the first node and make the next node the head
        struct node *deleteNode = head;
        head = head->next;
        head->prev = tail;
        tail->next = head;
        free(deleteNode);
    }
    //printf("Deleted the first node of the linked list.\n");
}

// Function to delete the last node of the linked list
void deleteAtEnd() {
    // If the list is empty, do nothing
    if(head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }
    // If there is only one node in the list, delete it and set the head and tail to NULL
    if(head == tail) {
        free(head);
        head = NULL;
        tail = NULL;
    } else {
        // Delete the last node and set the previous of the tail to the new tail
        struct node *deleteNode = tail;
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        free(deleteNode);
    }
    //printf("Deleted the last node of the linked list.\n");
}

// Function to delete a node from between two nodes in the linked list
void deleteInBetween(int position) {
    // If the list is empty, do nothing
    if(head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }
    // Traverse to the node at the given position
    struct node *temp = head;
    for(int i=1; i<position; i++) {
        if(temp == NULL) {
            printf("Invalid position.\n");
            return;
        }
        temp = temp->next;
    }
    // Delete the node at the given position
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
    //printf("Deleted the node at position %d in the linked list.\n", position);
}

// Function to display the linked list
void display() {
    // If the list is empty, do nothing
    if(head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }
    // Traverse through the list and print each element
    printf("elements are ");
    struct node *temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != head);
    printf("\n");
}

int main() {
    int choice=0, value, position;
    while(1) {
        printf("Enter your choice:\n");
        printf("1. Insert at beginning\n2. Insert at end\n3. Insert in between\n4. Delete from beginning\n5. Delete at end\n6. Delete in between\n7. Display\n8. Exit\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                //printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertAtBeginning(value);
                break;
            case 2:
                //printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 3:
                //printf("Enter the position to insert: ");
                scanf("%d", &position);
                //printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertInBetween(value, position);
                break;
            case 4:
                deleteFromBeginning();
                break;
            case 5:
                deleteAtEnd();
                break;
            case 6:
                //printf("Enter the position to delete: ");
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