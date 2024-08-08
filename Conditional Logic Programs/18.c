// Write a C program to calculate profit and loss on a transaction

#include<stdio.h>
main()
{
	float s,c,price;
	
	printf("\n\n Enter a selling price :");
	scanf("%f",&s);
	
	printf("\n\n Enter a cost price :");
	scanf("%f",&c);
	
	if(c<s)
	{
		price=c-s;
		printf("\n\n profit");
		printf("%f",price);
	}
	else 
	{
		price=s-c;
		printf("\n\n Loss");
		printf("%f",price);
	}
	
	
	
}
