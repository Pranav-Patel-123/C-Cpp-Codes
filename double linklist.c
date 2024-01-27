#include <stdio.h>

#include <stdlib.h>

void display();

struct Node {

int data;

struct Node* prev;

struct Node* next;

};

int main()

{

struct Node* head;

struct Node* first=NULL;

struct Node* second=NULL;

struct Node* third=NULL;

struct Node* fourth=NULL;

     first = (struct Node*)malloc(sizeof(struct Node));

second = (struct Node*)malloc(sizeof(struct Node));

third = (struct Node*)malloc(sizeof(struct Node));

fourth = (struct Node*)malloc(sizeof(struct Node));

first->data = 10;

second->data = 20;

third->data = 30;

fourth->data = 40;

          first->next = second;

          first->prev=NULL;

          second->next = third;

          second->prev=first;

          third->next = fourth;

          third->prev=second;

          fourth->next = NULL;

          fourth->prev = third;

head=first;
head=insertbeginning(head,100);

display(head);

return 0;

}

void display(struct Node* temp) {

  //struct Node* temp;

printf("The doubly linked list elements are:\n");

  while (temp != NULL) {

    printf("%d ", temp->data);

    temp=temp->next;



  }
}
  int insertbeginning(struct Node *head,int item)
{

   struct Node * newnode;
   newnode = (struct Node*)malloc(sizeof(struct Node));

   if(head==NULL)
   {
       newnode->next = NULL;
       newnode->prev=NULL;
       newnode->data=item;
       head=newnode;
   }
   else
   {
      newnode->data=item;
       newnode->prev=NULL;
       newnode->next = head;
       head->prev=newnode;
       head=newnode;
   }
   return head;
}

int insertion_last(struct Node *head,int item)
{
   struct Node *newnode,*tail;

   newnode = (struct Node *) malloc(sizeof(struct Node));


       if(tail == NULL)
       {
          newnode->next = NULL;
           newnode->prev = NULL;
           head = newnode;
       }
       else
       {
          tail=head;
          while(tail->next!=NULL)
          {
              tail = tail->next;
          }

          tail->next = newnode;
          newnode ->prev=tail;
          newnode->data=item;
          newnode->next = NULL;
          }
         return head;
       }