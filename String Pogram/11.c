/* Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa.*/

#include <stdio.h>
main() 
{
    char str[100];
    int i;
    
    printf("Enter a sentence: ");
    gets(str);
    

    for (i = 0; str[i] != '\0'; i++)
	{
        if (islower(str[i]))
		{
            str[i] = toupper(str[i]);
        }
		else if (isupper(str[i])) 
		{
            str[i] = tolower(str[i]);
        }
    }
    printf("Transfer sentence : %s\n", str);
    
}

