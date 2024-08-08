// Write a program in C to count the total number of words in a string

#include<stdio.h>
main()
{
	char a[50];
	int i,tot;
	
	printf("Enter the number :");
	gets(a);
	
	for(i=1;a[i]!='\0';i++)
	{
		tot++;
	}
	printf("Total number : %d",tot);
}
