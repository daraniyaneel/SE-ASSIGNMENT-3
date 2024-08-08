/* .Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\ */

#include<stdio.h>
main()
{
	int salary;
	float HRA,DA,gsalary;
	
	printf("\n\n Enter a salary :");
	scanf("%d",&salary);
	
	if(salary <=10000)
	{
		HRA = 0.20 * salary;
		DA = 0.80 * salary;
	}
	else if(salary <=20000)
	{
		HRA = 0.25 * salary;
		DA = 0.90 * salary;
	}
	else
	{
		HRA = 0.30 * salary;
		DA =0.95 * salary;
	}

	gsalary = salary + HRA + DA;
	
	printf("\n\n gross salary %.2f",gsalary);
	
}
