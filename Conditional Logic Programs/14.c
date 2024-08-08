// WAP to find the largest of three numbers.

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("\n\n Enter a number :");
	scanf("%d",&a);
	
	printf("\n\n Enter a number :");
	scanf("%d",&b);
	
	printf("\n\n Enter a number :");
	scanf("%d",&c);
	
	if(a>b)
	{
		printf("\n\n a is big");
	}
	else if(b>c)
	{
		printf("\n\n b is big");
	}
	else
	{
		printf("\n\n c is big");
	}
	

}
