// WAP to input the week number and print week day

#include<stdio.h>
main()
{
	int choice;
	printf("\npress 1 monday");
	printf("\npress 2 tuesday");
	printf("\npress 3 wednesday");
	printf("\npress 4 thursday");
	printf("\npress 5 friday");
	printf("\npress 6 saturday");
	
	printf("\n Enter your choice");
	scanf(" %d",&choice);
	
	if(choice==1)
	{
		printf("\nmonday");
	}
	else if(choice==2)
	{
		printf("\ntuesday");
	}
	else if(choice==3)
	{
		printf("\nwednesday");
	}
	else if(choice==4)
	{
		printf("\nthursday");
	}
	else if(choice==5)
	{
		printf("\nfriday");
	}
	else if(choice==6)
	{
		printf("\nsaturday");
	}
	else if(choice==7)
	{
		printf("\nsunday");
	}
	else
	{
		printf("Invalid choice");
	}
}
