#include <stdio.h>

main()
{
    char str[100], result[100];
    int j = 0,i;
    
    printf("Enter a string: ");
    gets(str);
    
    for (i = 0; str[i] != '\0'; i++)
	{
        if (isalpha(str[i])) 
		{
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    
    printf("String characters: %s\n", result);
}

