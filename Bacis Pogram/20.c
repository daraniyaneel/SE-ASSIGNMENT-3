/* Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/

#include<stdio.h>
main()
{
	float  salary,insurance,li,r;
	
	printf("\n Enter your salary :");
	scanf("%f",&salary);
	
	insurance=0.10*salary;
	
	printf("\n insurance premium %f",insurance);
	
	li=0.10*salary;
	
	printf("\n loan installment %f",li);
	
	r=salary-insurance-li;
	
	printf("\n remaining salary %f",r);
	
	
}
