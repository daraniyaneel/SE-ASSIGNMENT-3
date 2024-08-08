// WAP to check if the given year is a leap year or not.

#include<stdio.h>
main()
{
	int n;
	
	printf("Enter your year :");
	scanf("%d",&n);
	
		if(n%4==0)
		{
			if(n % 100==0)
			{
				if(n % 400==0)
				{
					printf("\n\n leap year");
				}
				else
				{
					printf("\n\n Not leap year");	
				}
			}
			else
			{
					printf("\n\n leap year");
			}
		}
		else
		{
			printf("\n\n Not leap year");
		}	
		
		
}
