/* WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case */

#include<stdio.h>
main()
{
	int day;
	char number;
	
	printf("\n Enter a number :");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1 :
			printf("monday");
			break;
		case 2 :
			printf("tuesday");
			break;
		case 3 :
			printf("wednesday");
			break;
		case 4 :
			printf("thursday");
			break;
		case 5 :
			printf("friday");
			break;
		case 6 :
			printf("saturday");
			break;
		case 7 :
			printf("sunday");
			break;
		default :
			printf("invalid choice");
			break;
	}
	printf("\n\n\n----------------------------------------------------------");
	
	printf("\n\n Enter a character");
	scanf(" %c",&number);
	switch(number)
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
		case 'U' :
			printf(" vowel number");
			break;
			
		default :
			printf("consonant");
			break;
			
	}
	
	
	
}
