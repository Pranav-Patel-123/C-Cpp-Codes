#include<stdio.h>
int main()
{
	int i,j;
	char a[4][7];
	for(i=0;i<4;i++)
	{
		a[i][0]='A';
		a[i][6]='G';
	}
	for(i=0;i<3;i++)
	{
		a[i][5]='F';
		a[i][1]='B';
	}
	for(i=0;i<2;i++)
	{
		a[i][4]='E';
		a[i][2]='C';
	}
	a[0][3]='D';
/*
	a[3][2]= ; a[2][4]= ; a[2][5]= ; a[2][5]= ; a[1][3]=  ;
*/
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<7;j++)
			{
				printf(" %c",a[i][j]);
			}
	}
	return 0;
}
