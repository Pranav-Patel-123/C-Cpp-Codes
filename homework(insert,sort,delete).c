#include<stdio.h>
int a;

void insert(int *array);
void delete(int *array);
void sort(int *array);
void display(int *array);

int main()
{
    printf("enter a no. of elements for an array = ");
    scanf("%d",&a);
    int array[a];
    printf("enter %d elements for an array = ",a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&array[i]);
    }
    while (1)
    {
        printf("\nyou can perform the following:\n");
        printf("1.INSERT element in an array\n");
        printf("2.DELETE element in an array\n");
        printf("3.SORT elements of an array\n");
        printf("4.DISPLAY elements of an array\n");
        printf("enter your choice\n");
        int choice=0;
        scanf("%d",&choice);
        switch(choice)        
        {
            case 1:
                insert(array);
                break;
            case 2:
                delete(array);
                break;
            case 3:
                sort(array);
                break;
            case 4:
                display(array);
                break;
            default:
                return 0;
                break;

        }
    }
}

void insert(int *array)
{
    a++;
    printf("enter the element that you want to add to the array\n");
    scanf("%d",&array[a-1]);
    printf("element add successfully\n");
}
void delete(int *array)
{
    a--;
    int b;
    printf("enter the element that you want to delete to the array\n");
    scanf("%d",&b);
    for(int i=b;i<a+1;i++)
    {
        array[i-1]=array[i];
    }
    printf("element deleted successfully\n");
}
void sort(int *array)
{
    for(int i=0;i<a;i++)
    {
        int temp=0;
        for(int j=i+1;j<a;j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}
void display(int *array)
{
    for(int i=0;i<a;i++)
    {
        printf("%d\t",array[i]);
    }
}