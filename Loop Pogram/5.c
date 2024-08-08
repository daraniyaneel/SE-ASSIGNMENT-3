// WAP to print factorial of given number

#include<stdio.h>
main()
{
	int n,i,m=1;
	
	printf("\n\n Enter a number :");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		m=m*i;
		
		i++;
	}
	printf("%d",m);
}
