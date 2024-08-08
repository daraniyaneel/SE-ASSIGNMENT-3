/* .Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable */

#include <stdio.h>

main()
{
    int a, b;

    printf("Enter value a : ");
    scanf("%d", &a);
    printf("Enter value b : ");
    scanf("%d", &b);

    a = a + b;  
    b = a - b;  
    a = a - b;  

    printf("Swap a value :%d",a);
    printf("\n Swap b value :%d",b);
}

