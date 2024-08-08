//.Convert years into days and months

#include<stdio.h>
main()
{
	int year,d,m;
	
	
	
	printf("\n\n Enter your year :");
	scanf("%d",&year);
	
	d=365*year;
	
	printf("\n\n days: %d",d);
	
	m=12*year;
	
	printf("\n\n months: %d",m);
}
