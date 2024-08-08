// Accept month number and display month name

#include<stdio.h>
main()
{
	int choice;
	
	printf("\npress 1 january");
	printf("\npress 2 february");
	printf("\npress 3 march");
	printf("\npress 4 april");
	printf("\npress 5 may");
	printf("\npress 6 june");
	printf("\npress 7 july");
	printf("\npress 8 august");
	printf("\npress 9 september");
	printf("\npress 10 october");
	printf("\npress 11 november");
	printf("\npress 12 december");
	
	printf("\n Enter your choice :");
	scanf(" %d",&choice);
	
	if(choice==1)
	{
		printf("january");
	}
	else if(choice==2)
	{
		printf("february");
	}
	else if(choice==3)
	{
		printf("march");
	}
	else if(choice==4)
	{
		printf("april");
	}
	else if(choice==5)
	{
		printf("may");
	}
	else if(choice==6)
	{
		printf("june");
	}
	else if(choice==7)
	{
		printf("july");
	}
	else if(choice==8)
	{
		printf("august");
	}
	else if(choice==9)
	{
		printf("september");
	}
	else if(choice==10)
	{
		printf("october");
	}
	else if(choice==11)
	{
		printf("november");
	}
	else if(choice==12)
	{
		printf("december");
	}
	else
	{
		printf("invalid choice");
	}
	
	
	
}
