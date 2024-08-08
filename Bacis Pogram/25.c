// Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
	int n1,n2,n3,n4,n5;
	float average;
	
	printf("Enter a number 1 :");
	scanf("%d",&n1);
	
	printf("Enter a number 2 :");
	scanf("%d",&n2);
	
	printf("Enter a number 3 :");
	scanf("%d",&n3);
	
	printf("Enter a number 4 :");
	scanf("%d",&n4);
	
	printf("Enter a number 5 :");
	scanf("%d",&n5);
	
	average=(n1+n2+n3+n4+n5)/5;
	
	printf("\n average of %.2f",average);
}
