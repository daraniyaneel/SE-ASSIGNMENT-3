/* Write a program to find out the max from given number (E.g., No: -1562
Max number is 6) */

#include<stdio.h>
main()
{
	int a[5],i,max=0,n;
	
	
	
	for(i=1;i<=4;i++)
	{
		printf("Enter the value :");
		scanf("%d",&a[i]);
	}
	max=a[1];
	
	for(i=2;i<=4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];	
		}
		printf("\n\n maximum value",max);	
	}
}
