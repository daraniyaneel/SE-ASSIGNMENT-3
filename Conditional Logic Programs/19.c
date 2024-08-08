/* .Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00 */

#include<stdio.h>
main()
{
	char name[50];
    int id, units;
    float total, var1 = 1, var2;

    printf("Enter your name : ");
    scanf("%s", &name[50]);

    printf("Enter customer ID : ");
    scanf("%d", &id);

    printf("Enter units : ");
    scanf("%d", &units);

    if (units >= 800)
    {
        total = units * 2.00;
    }
    else if (units < 800 && units >= 600)
    {
        total = units * 1.80;
    }
    else if (units < 600 && units >= 350)
    {
        total = units * 1.50;
    }
    else if (units < 350 && units > 0)
    {
        total = units * 1.20;
    }
    else {
        printf("Enter valid units!\n");
    }
    if (total > 800)
    {
        var1 = total * 0.18;
        total += var1;
        printf("Total amount(with 18%% charges)%.2f\n", total);
    }
    if (total > 1 && total < 256)
    {
        printf("Total amount : 256/-\n");
    }
    if(total >= 256 && total <= 800)
    {
        printf("Total amount : %.2f\n", total);
    }


}
