/* WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/

#include<stdio.h>
main()
{
	int n1,n2;
	char choice;
	
	
	printf("\n\n Enter a number 1 :");
	scanf("%d",&n1);
	
	printf("\n\n Enter a number 2 :");
	scanf("%d",&n2);
	
	printf("\n\n press + addition");
	printf("\n\n press - subtraction");
	printf("\n\n press * multiplication");
	printf("\n\n press / division");
	
	printf("\n\n Enter your choice");
	scanf(" %c",&choice);
	
	if(choice=='+')
	{
		printf("\n\n addition %d",n1+n2);
	}
	else if(choice=='-')
	{
		printf("\n\n subtraction %d",n1-n2);
	}
	else if(choice=='*')
	{
		printf("\n\n multiplication %d",n1*n2);
	}
	else
	{
		printf("\n\n division %d",n1/n2);
	}
	
	
}
