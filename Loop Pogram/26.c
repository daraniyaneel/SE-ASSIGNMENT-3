//  (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
main()
{
    int i,n,j,a=0,b=0;
    printf("Enter the value : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = 0;
       for (j=1; j <= i; j++)
       {
        a += j;
       }
        b += a;
       
    }
    printf("%d\n",b);
}
