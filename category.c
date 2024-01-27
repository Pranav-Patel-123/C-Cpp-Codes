#include<stdio.h>
int main()
{
	int cat,b,c;
	printf("Enter the category in the below format: \n1.SC/ST/OBC\n2.VJNT/DT\n3.OPEN\n");
	scanf("%d",&cat);
	if(cat==1)
	{
		printf("Enter the choice in the below format:\n 1.SC\n 2.ST\n 3.OBC\n");
		scanf("%d",&b);
		if(b==1)
		{
			printf("Go to counter SC");
		}
		else if(b==2)
		{
			printf("Go to counter ST");
		}
		else
		{
			printf(" Go to counter OBC");
		}
	}
	else if(cat==2)
	{
		printf("Enter the choice in the below format:\n 1.VJNT\n 2.DT\n");
		scanf("%d",&c);
		if(c==1)
		{
			printf("Go to counter VJNT");
		}
		else
		{
			printf("Go to counter DT");
		}
	}
	else if(cat==3)
	{
		printf("Go to counter OPEN");
	}
	else
	{
		printf(" You are not in any valid category");
	}
	return 0;
}
