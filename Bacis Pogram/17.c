// Calculate person’s insurance premium based on salary

#include<stdio.h>
main()
{
	int salary;
	float rate,premiam;
	
	printf("\n\n Enter a salary :");
	scanf("%d",&salary);
	
	printf("\n\n Enter a rate :");
	scanf("%f",&rate);
	
	rate=rate/100;
	
	premiam=salary*rate;
	
	printf("\n\n insurance premiam %.2f :",premiam);
}
