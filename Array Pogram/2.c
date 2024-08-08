/* WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven) */

#include<stdio.h>
main()
{
	int n1,n2,choice;
	
	printf("\n Enter a number 1 :");
	scanf("%d",&n1);
	
	printf("\n Enter a number 2 :");
	scanf("%d",&n2);
	
	printf("\n + is addition");
	printf("\n - is subtraction");
	printf("\n * is multiplication");
	printf("\n / is division");
	
	printf("\n Enter your choice :");
	scanf(" %c",&choice);
	
	if(choice=='+')
	{
		printf("\n Addition %d",n1+n2);
	}
	else if(choice=='-')
	{
		printf("\n Subtraction %d",n1-n2);
	}
	else if(choice=='*')
	{
		printf("\n Multiplication %d",n1*n2);
	}
	else
	{
		printf("\n Division %d",n1/n2);	
	}
}
