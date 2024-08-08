#include<stdio.h>
main()
{
    int i,j,a;
    for (i = 1; i <= 5; i++)
    {
            a = 65;
        for (j = 1; j <= i; j++)
        {
            printf(" %c",a);
            a++;
        }
        printf("\n");
    }
    
}
