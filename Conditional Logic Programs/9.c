/* C Program to Check Uppercase or Lowercase or Digit or Special
Character */

#include<stdio.h>
main()
{
	char a;
	
	printf("Enter your character :");
	scanf(" %c",&a);
	
	if(a>='A'  && a<='Z')
	{
		printf("\n value is Uppercase ");
	}
	else if(a>='a' && a<='z')
	{
		printf("\n value is Lowercase");
	}
	else if(a>='0'  && a<='9')
	{
		printf("\n value is Digital");
	}
	else
	{
		printf("\n value is special character");	
	}
}
