//WAP to Find Area And Circumference of Circle

#include<stdio.h>
main()
{
	int radus;
	float area,circumference,pi=3.14;
	
	printf("\n\n Enter a Number :");
	scanf("%d",&radus);
	
	area=pi*radus*radus;
	
	circumference=2*pi*radus;
	
	printf("\n area : %.2f",area);
	
	printf("\n circumference :%.2f",circumference);
}
