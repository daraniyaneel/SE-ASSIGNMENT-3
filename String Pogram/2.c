//Write a program in C to separate individual characters from a string

#include <stdio.h>


int main() {
	int i;
    char str[10];
    
    printf("Enter a string: ");
    gets(str);
  
    str[strcspn(str, "\n")] = '\0';
    
    printf("The individual characters :\n");
    for (i = 0; i < strlen(str); i++)
	{
        printf(" %c\n", str[i]);
    }
}

