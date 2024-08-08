// Write a program to find out the max number from given array using function

#include<stdio.h>
main()
{
	int a[100],size,i,max;
	
	printf("Enter  your size :");
	scanf("%d",&size);
	
	for(i=0;i<=size;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<=size;i++)
	{
		a[i]>max;
		
		max=a[i];
	}
	printf("%d",max);
	

}
