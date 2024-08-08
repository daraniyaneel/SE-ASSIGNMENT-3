/*Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)*/

#include<stdio.h>
main()
{
	int a,b;
	
	printf("\n\n Enter a number :");
	scanf("%d",&a);
	
	printf("\n\n Enter a number :");
	scanf("%d",&b);
	
	printf("\n\n addition = %d",a+b);
	printf("\n\n subtraction = %d",a-b);
	printf("\n\n multiplication = %d",a*b);
	printf("\n\n division = %d",a/b);
	printf("\n\n module = %d",a%b);
}
