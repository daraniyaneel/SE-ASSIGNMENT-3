/* .Write a C program to check whether a triangle can be formed with the given
values for the angles.*/

#include<stdio.h>
main()
{
	float a,b,c;
	
	printf("\n Enter a triangle :");
	scanf("%f%f%f",&a,&b,&c);
	
	if((a+b+c==180))
	{
		printf("\n Triangle formed");
	}
	else
	{
		printf("\n Triangle  not formed");
	}
}
