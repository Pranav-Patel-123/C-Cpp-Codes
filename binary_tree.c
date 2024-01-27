// how to return a pointer from a function

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *left, *right;
};
struct node* root = NULL;
// struct node* ptr = NULL;


int *create_newnode(struct node *ptr1, int value)
{
    struct node* newnode= malloc(sizeof(struct node));
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data=value;
    ptr1=newnode;
    return newnode;
}
int traverse(struct node *ptr, char c)
{
    if(c=='L'||c=='l')
        ptr=ptr->left;
    if(c=='R'||c=='r')
        ptr=ptr->right;
    return ptr;
}
void preorder(struct node *ptr)
{
    if(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            preorder(ptr->left);
            preorder(ptr->right);
        }
}
// void inorder()
// {
//     if(ptr!=NULL)
//         {
//             inorder(ptr->left);
//             printf("%d ",ptr->data);
//             inorder(ptr->right);
//         }
// }
// void postorder()
// {
//     if(ptr!=NULL)
//         {
//             postorder(ptr->left);
//             postorder(ptr->right);
//             printf("%d ",ptr->data);
//         }
// }
int main()
{
    int xyz=0;
    while(1)
    {
        struct node *ptr1 = NULL;
        int choice=0,z=0;
        int n=0;
        char a[100];
        printf("\n1.Insert element\n");
        printf("2.Preorder traverse\n");
        printf("3.Inorder traverse\n");
        printf("4.Postorder traverse\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                //insert element
                if(root==NULL)
                {
                    printf("enter the value = ");
                    scanf("%d",&xyz);
                    root = create_newnode(root, xyz);
                }
                printf("do you want to insert another element?");
                scanf("%d",&z);
                if(z==1)
                {
                    printf("enter the position in the form of L or R or LLR or LRLR = ");
                    scanf("%s",a);
                    n=strlen(a);
                    // ptr=root;
                    for(int i=0; i<n; i++)
                    {
                        ptr1 = traverse(root,a[i]);
                    }
                    printf("\nenter the value = ");
                    scanf("%d",&xyz);
                    create_newnode(ptr1, xyz);
                }
            break;
            case 2:
                //preorder traverse
                // ptr=root;
                preorder(root);
            break;
            case 3:
                //inorder traverse
                // ptr=root;

            break;
            case 4:
                //postorder traverse
                // ptr=root;

            break;
            default:
                return 0;
        }   
    }   
}