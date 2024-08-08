// WAP to convert years into days and days into years

#include<stdio.h>
main()
{
	int year,a,day,b;
	
	printf("Enter a year :");
	scanf("%d",&year);
	
	printf("Enter a day :");
	scanf("%d",&day);
	
	a=365*year;
	
	printf(" \n\n years into day %d",a);
	
	b=day/365;
	
	printf("\n\n day into years %d",b);
	
	
	
}
