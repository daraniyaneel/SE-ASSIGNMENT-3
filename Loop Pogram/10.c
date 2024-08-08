// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include<stdio.h>
main()
{
    int value, i, last, first, a = 1;
    printf("Enter the value: ");
    scanf("%d", &value);

    for (i = value; i > 0; i /= 10)
    {
        if (a)
        {
            last = i % 10;
            
        }
        a =0;

        first = i % 10;

    }
     printf("%d",first+last);
}
