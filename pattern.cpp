//pattern of diamond for any character
#include<stdio.h>
int main()
{
	int i,j,b;
	char a;
	printf("Enter any Character\n");
	scanf("%c",&a);
	for(i=0;i<4;i++)
	{
		printf("\n\t");
		b=i+i;
		if(i==0)
			{
				printf("   ");
			}
	    else if(i==1)
			{		
				printf("  ");
			}
		else if(i==2)
			{
				printf(" ");
			}
		else
			{	
				printf("");
			}
		for(j=0;j<=b;j++)
			{
				printf("%c",a);
			}
	} 		 
	for(i=4;i<7;i++)
		{
			printf("\n\t");
			b=i+i-5;
			if(i==4)
				{
					printf(" ");
				}
			else if(i==5)
				{
					printf("  ");
				}
			else
				{
					printf("   ");
				}
			for(j=b;j<8;j++)
				{
					printf("%c",a);
				}
		} 
 
	return 0;
}
