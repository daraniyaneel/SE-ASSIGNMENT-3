/* WAP to accept 5 numbers from user and display in reverse order using for
loop and array */

#include<stdio.h>
main()
{
	int a[10],i;
	
	printf("\n\n Enter a number :");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf(" Reverse : %d",a[i]);
	}
}
