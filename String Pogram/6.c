
/* Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/

#include <stdio.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, special = 0,i;
    
    printf("Enter a string: ");
    gets(str);
    
    for (i = 0; str[i] != '\0'; i++) 
	{
        if (isalpha(str[i]))
		{
            alphabets++;
        } else if (isdigit(str[i])) 
		{
            digits++;
        } else if (!isspace(str[i])) 
		{
            special++;
        }
    }
    
    printf("number of alphabets: %d\n", alphabets);
    printf("number of digits: %d\n", digits);
    printf("number of special characters: %d\n", special);
    
}

