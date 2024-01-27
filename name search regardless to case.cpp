#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int n,i,j;
	char name[10];
	printf("enter the number of mentors = ");
	scanf("%d",&n);
	char mentor[n];
	printf("enter names of mentors =  ");
	for(i=0;i<n;i++)
	{
		scanf("%s",&mentor[i]);
	}
	printf("enter the name you want to search = ");
	scanf("%s",&name[10]);
	for(i=0;i<n;i++)
	{

			if(toupper(name[10])==toupper(mentor[i]))
			{
				printf("%d",i);
			}
				
//		}	
	}

	return 0;
}
