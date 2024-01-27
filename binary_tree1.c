#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};
struct node *ptr=NULL;

void traverse(char a)
{
    if(a=='l'||a=='L')
    {
        ptr=ptr->left;
    }
    else if(a=='r'||a=='R')
    {
        ptr=ptr->right;
    }
}

int main()
{
    int n=0, c=0;
    char position[100];
    struct node *root = (struct node*)malloc(sizeof(struct node));
    printf("enter the value for the root = ");
    scanf("%d",root->data);
    c++;
    {
        printf("enter the position of the newnode = ");
        gets(position);
        n=strlen(position);
        for(int i=0; i<n; i++)
        {
            traverse(position[i]);
        }
        if(c==1);
        {    
            struct node *newnode = malloc(sizeof(struct node));
            printf("enter the value for the node = ");
            scanf("%d",newnode->data);
            newnode->left=NULL;
            newnode->right=NULL;
            if(position[n-1]=='l'||position[n-1]=='L')
                root->left=newnode;
            if(position[n-1]=='r'||position[n-1]=='R')
                root->right=newnode;
        }

        struct node *temp = malloc(sizeof(struct node));
        printf("enter the value for the node = ");
        scanf("%d",temp->data);
        temp->left=NULL;
        temp->right=NULL;
        if(position[n-1]=='l'||position[n-1]=='L')
            newnode->left=temp;
        if(position[n-1]=='r'||position[n-1]=='R')
            newnode->right=temp;

        newnode=temp;
    }
}