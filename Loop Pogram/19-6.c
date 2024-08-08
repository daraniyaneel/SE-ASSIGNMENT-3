#include<stdio.h>
main(){
    int i,j,a,b;
    for (i = 1; i <= 6; i++)
    {
            for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        a = i;
        for (a ; a <= 5; a++)
        {
            printf(" *");
        }
    printf("\n");
    }
}
