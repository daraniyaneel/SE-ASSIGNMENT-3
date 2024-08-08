// Program of Armstrong Number in C Using For Loop & While Loop

#include <stdio.h>
main() 
{
    int num, a, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    a = num;

    while (a != 0) 
	{
        remainder = a % 10;
        
       result += remainder * remainder * remainder;
        
       a /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}

