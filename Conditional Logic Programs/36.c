/** Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill */

#include<stdio.h>
main()
{
	int unit;
	float unitch,surcharge,total;
	
	printf("\n\n Enter unit number :");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		unitch=unit * 50;
	}
	else if(unit<=150)
	{
		unitch=(0.50 * 50 ) + ((unit-50) * 0.75);
	}
	else if(unit<=250)
	{
		unitch=(0.50 * 50) + (0.75 * 100) + ((unit-150) * 1.20);
	}
	else
	{
		unitch=(0.50 * 50) + (0.75 * 100) + (1.20 * 100) + ((unit-250) * 1.50);
	}
	
	surcharge=0.20 * unitch;
	
	total = unitch + surcharge;
	
	printf("\n\n bill %.2f",total);
}

