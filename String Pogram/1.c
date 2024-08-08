/* Write a program in C to find the length of a string without using library
functions. */



#include<stdio.h>
main()
{
	char a[50];
	int i,length;
	
	printf("Enter a string :");
	gets(a);
	
	for(i=1;a[i]!='\0';i++)
	{
		length++;
	}
	printf("\n Length %d",length);
}
