/* Calculate 5 numbers from user and calculate number of even and odd using
of while loop */

#include<stdio.h>
main()
{
    int num1,ans, num2,num3,num4,num5,i=1;
    printf("Enter the 1 value : ");
    scanf("%d", &num1);
    printf("Enter the 2 value : ");
    scanf("%d", &num2);
    printf("Enter the 3 value : ");
    scanf("%d", &num3);
    printf("Enter the 4 value : ");
    scanf("%d", &num4);
    printf("Enter the 5 value : ");
    scanf("%d", &num5);

while (i > 0)
{
    ans = num1 + num2+num3+num4+num5;
    if (ans % 2 == 0)
    {
        printf("Your number is even number");
    }else{
        printf("Your number is odd number");
    }
    i--;
}
}
