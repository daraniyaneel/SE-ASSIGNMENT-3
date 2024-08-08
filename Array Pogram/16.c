// Accept 5 numbers from user and perform sum of array

#include<stdio.h>
main()
{
	int a[50],i,sum=0;
	
	printf("\n Enter a number :");
	for(i=1;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<6;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of %d",sum);
	
}
