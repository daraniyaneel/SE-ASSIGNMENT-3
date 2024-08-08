//WAP to find maximum number among 3 numbers using ternary operator

#include<stdio.h>
main()
{
	int a,b,c,max;
	
	printf("\n Enter three number :");
	scanf("%d%d%d",&a,&b,&c);
	
	max=(a>b) ? (a>c ? b:c) : (b>c ? b:c);
	printf("\n %d",max);
}
