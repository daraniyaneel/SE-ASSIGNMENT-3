// Calculate compound interest

#include<stdio.h>
main()
{
   //	A = P(1 + r/n) ^ (nt)
   int salary,  year;
   float ans1,ans2 = 1, ans3 ,rate ,i;
   
   printf("Enter the annual salary :\n");
   scanf("%d", &salary);
   printf("Enter the annual interest rate :\n");
   scanf("%f", &rate);
   printf("Enter the year :\n");
   scanf("%d", &year);

   ans1= 1+rate/100;
   for (i = 0; i < year; i++)
   {
      ans2 = ans2 * ans1;
   }
   ans3= salary * ans2;

   printf("%.2f",ans3);
}



