// Write a program in C to combine two strings manually

#include<stdio.h>
main()
{
	char a[50],b[50],c[50];
	int i,j=0;
	
	printf("\n\n Enter a string 1 :");
	gets(a);
	
	printf("\n\n Enter a string 2 :");
	gets(b);
	
	while(a[i]!='\0')
	{
		c[i]=a[i];
		i++;
	}
	while(b[j]!='\0')
	{
		c[i]=b[j];
		i++;
		j++;
	}
	c[i]!='\0';
	printf("combine string %s",c);
}
