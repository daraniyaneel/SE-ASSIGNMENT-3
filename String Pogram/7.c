// Write a program in C to copy one string to another string.

#include<stdio.h>
main()
{
	char a[50],b[50];
	int i;
	
	printf("\n\n Enter a string :");
	gets(a);
	
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
//	b[i]!='\0';
	printf("\n\n copy strings : %s",b);
}
