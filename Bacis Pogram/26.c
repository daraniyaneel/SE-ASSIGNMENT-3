// Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main()
{
	float f,c;
	
	printf("\n Enter a fahrenheit :");
	scanf("%f",&f);
	
	c=(f-32)*5/9;
	
	printf("\n celsius %.2f",c);
	
	
}
