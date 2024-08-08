#include<stdio.h>
main()
{
    int i,j,a,b;
    for (i = 1; i <= 10; i++)
    {
       if(i % 2 != 0){
        a = i;
        for (a; a <= 9; a++)
        {
            printf(" ");
        }
            for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
       }
       
    }
}
