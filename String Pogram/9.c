// Write a program in C to find the maximum number of characters in a string.

#include<stdio.h>
main()
{
	char a[50];
	int i,max=0;
	
	printf("Enter a number :");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!='\0'<max)
		{
			max=a[i];
		}
		printf("\n\n max number %d",max);
		
	}
}
