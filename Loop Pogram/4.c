// WAP to print table up to given numbers

#include<stdio.h>
main()
{
	int n,i;
	
	printf("\n\n Enter a number");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\n %d  ",i * n);
	}
}
