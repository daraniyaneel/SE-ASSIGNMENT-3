// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
main()
{
    int n,i,a,b;
    printf("Enter value : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = i * i;
        b += a;
    }
    printf("%d\n",b);
}
