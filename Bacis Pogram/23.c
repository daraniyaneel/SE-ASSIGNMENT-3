/* WAP to calculate swap 2 numbers with using of multiplication and division */

#include <stdio.h>

main() 
{
    int a, b, c;

    printf("Enter value a : ");
    scanf("%d", &a);
    printf("Enter value b : ");
    scanf("%d", &b);
    
    c = a * b;
    a = c / a;
    b = c / b;

    printf("Swap a value :%d", a);
    printf("\n Swap b value :%d", b);
}

