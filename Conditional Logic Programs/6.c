//Find the Character Is Vowel or Not

#include<stdio.h>
main()
{
	
	char c;
	
	printf("\n\n Enter the number :");
	scanf(" %c",&c);
	
	switch(c)
	{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
		case 'A' :
		case 'E' :
		case 'I' :
		case 'O' :
		case 'U' : printf("\n\n vowel number");
				   break;
		default  : printf("\n\n Not vowel number");
				   break;
	}
	
	
	
}

