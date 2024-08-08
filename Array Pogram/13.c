/* WAP to accept 5 numbers from user and check entered number is even or odd
using of array */

#include<stdio.h>
main()
{
	int a[50],i;
	
	printf("\n Enter a number :");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n\nEven number %d",a[i]);
		}
		else
		{
			printf("\n\nOdd number %d",a[i]);
		}
	}
	
}
