#include<stdio.h>
main() 
{
    int ir, rate, year, i;
    float a,b,ans,total_ammount;
    printf("How much money to invest :");
    scanf("%d", &ir);

    printf("Enter interest rate:");
    scanf("%d", &rate);

    printf("How many year investing : ");
    scanf("%d", &year);

    a = 1 + (rate/100.00);
    b = 1;
    for ( i = 1; i <= year; i++)
    {
        b = b * a;
    }
    ans = ir * b;
    
    total_ammount = ans - ir;
    printf("Total compound interest : %.2f",total_ammount);
}

