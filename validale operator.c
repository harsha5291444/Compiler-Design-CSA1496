#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if(ch=='+')
	{
		printf("Addition");
	}
	else if(ch=='-')
	{
		printf("Subtraction");
	}
	else if(ch=='*')
	{
		printf("Multiplication");
	}
	else if(ch=='/')
	{
		printf("Division");
	}
	else
	{
		printf("It is not a mathematical operator");
	}
	
}
