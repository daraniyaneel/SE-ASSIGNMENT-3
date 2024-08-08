// WAP to accept 5 students name and store it in array

#include<stdio.h>
main()
{
	int a[5],i;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter a name :");
		scanf("%s",&a[i]);
	}
	printf("\n\n %s",a);
	
}
