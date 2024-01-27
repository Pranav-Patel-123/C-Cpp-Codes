/* 1.Gets will print the complete name including whitespace whereas scanf will not
   2.There is inbuilt \0 in the c language so that no garbage value is printed when limit is greater
   3.When \0 is used in between it will store everything but it will not print because printing will be terminated when it will get 0
   4. There is no bound checking in c
 */
#include<stdio.h>
int main()
{
	char name1[50]="+++++++++++++++";
//	printf("give you name :");
//	gets(name1);
	scanf("%s",name1);
//	name1[6]='+';
	puts(name1);
	name1[6]='?';
	puts(name1);
	name1[15]='?';
//	puts(name1);
//	printf("\n\0");
}
