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
    // If the list is empty, make the new node the head
    if(head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        // Traverse to the last node in the list
        struct node *temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        // Insert the new node at the beginning of the list
        newNode->next = head;
        head = newNode;
        // Set the next of the last node to the new head
        temp->next = head;
    }
    //printf("Inserted %d at the beginning of the linked list.\n", value);
}

// Function to insert a node at the end of the linked list
void insertAtEnd(int value) {
    // Allocate memory for the new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    // If the list is empty, make the new node the head
    if(head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        // Traverse to the last node in the list
        struct node *temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        // Insert the new node at the end of the list
        temp->next = newNode;
        newNode->next = head;
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
    temp->next = newNode;
    //printf("Inserted %d at position %d in the linked list.\n", value, position);
}

// Function to delete the first node of the linked list
void deleteFromBeginning() {
    // If the list is empty, do nothing
    if(head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }
    // If there is only one node in the list, delete it and set the head to NULL
    if(head->next == head) {
        free(head);
        head = NULL;
    } else {
        // Traverse to the last node in the list
        struct node *temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        // Delete the first node and make the next node the head
        struct node *deleteNode = head;
        head = head->next;
        temp->next = head;
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
    // If there is only one node in the list, delete it and set the head to NULL
    if(head->next == head) {
        free(head);
        head = NULL;
    } else {
        // Traverse to the second last node in the list
        struct node *temp = head;
        while(temp->next->next != head) {
            temp = temp->next;
        }
        // Delete the last node and set the next of second last node to the head
        struct node *deleteNode = temp->next;
        temp->next = head;
        free(deleteNode);
    }
   // printf("Deleted the last node of the linked list.\n");
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
    //printf("Deleted the node at position %d in the linked list.\n", position);
}

// Function to display the linked list
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
    for(int i = 0; ; i++) {
        printf("%d ", temp->data);
        temp = temp->next;
        if(temp == head) {
            break;
        }
    }
    printf("\n");
}

// Main function to run the program
int main() {
    int i,choice=0, value, position;
  for(i=0;i<=5;i++)
    {
        printf("Enter\n 1 to insert at the beginning\n 2 to insert at the end\n 3 to insert in between\n");
        printf(" 4 to delete from beginning\n 5 to delete at end\n 6 to delete in between\n");
        printf(" 7 to display the linked list\n 8 to exit.\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
               // printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                insertAtBeginning(value);
                break;
            case 2:
               // printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 3:
               // printf("Enter the position and value to be inserted: ");
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
                // printf("Enter the position of the node to be deleted: ");
                scanf("%d", &position);
                deleteInBetween(position);
                break;
            case 7:
                display();
                break;
            case 8:
                exit (0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}