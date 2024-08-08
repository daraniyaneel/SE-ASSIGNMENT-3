// Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
main()
{
    int value = 0 , i = 100;
    while (i > 0)
    {
        value += i;
        i--;
    }
    printf("\n\n %d",value);
}
