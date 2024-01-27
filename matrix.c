#include<stdio.h>
int main()
{
    int m1[10][10],m2[10][10],r1,r2,c1,c2,m3[10][10];
    printf("Enter rows and columns of m1:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and columns of m2:\n");
    scanf("%d %d",&r2,&c2);
    printf("Enter the elements of m1 row wise");
    for(int i=1;i<=r1;i++)
    {
        for(int j=1;j<=c1;j++)
        {
            printf("value of m1  %d%d :",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
     printf("Enter the elements of m2 row wise\n");
    for(int i=1;i<=r2;i++)
    {
        for(int j=1;j<=c2;j++)
        {
            printf("value of m2  %d%d :",i,j);
            scanf("%d",&m2[i][j]);
        }
    }

    //printing transpose of both the matrices
    for(int i=1;i<=r1;i++)
    {
        for(int j=1;j<=c1;j++)
        {
            printf("%d\t",m1[j][i]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    for(int i=1;i<=r2;i++)
    {
        for(int j=1;j<=c2;j++)
        {
             printf("%d\t",m2[j][i]);
        }
        printf("\n");
    }

    printf("\n\nMatrix multiplication:\n\n");
    int sum=0;
    for(int i=1;i<=r1;i++)
    {
        for(int j=1;j<=c2;j++)
        {
            sum=0;
            for(int k=1;k<=c1;k++)
            {
                for(int l=1;l<=r2;l++)
                {
                    sum += m1[i][k]*m2[l][j];
                }
            }
        }
        m3[i][j]=sum;
    }
    for(int i=1;i<=r1;i++)
    {
        for(int j=1;j<=c2;j++)
        {
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}