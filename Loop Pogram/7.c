/* WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746 */

#include<stdio.h>
main()
{
	int n,a;
	
	printf("\n\n Enter a number :");
	scanf("%d",&n);
	
	while(n>0)
	{
		a=n%10;
		printf(" %d",a);
		n=n/10;
	}
	
}
