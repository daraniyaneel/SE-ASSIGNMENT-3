// Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>
main()
{
	int number,n1,sum=0;
	
	printf("Enter the number :");
	scanf("%d",&number);
	
	for(number;number>0;number/=10)
	{
		n1=number % 10;
		sum =sum + n1;
	}
	printf("%d",sum);
}
