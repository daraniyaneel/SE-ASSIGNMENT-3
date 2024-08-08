/* Accept 5 employees name and salary and count average and total salary*/

#include<stdio.h>
main()
{
	int n1,n2,n3,n4,n5,s1,s2,s3,s4,s5,total;
	float average;
	
	printf("\nEnter a number 1 :");
	scanf("%s%d",&n1,&s1);
	printf("\nEnter a number 2 :");
	scanf("%s%d",&n2,&s2);
	printf("\nEnter a number 3 :");
	scanf("%s%d",&n3,&s3);
	printf("\nEnter a number 4 :");
	scanf("%s%d",&n4,&s4);
	printf("\nEnter a number 5 :");
	scanf("%s%d",&n5,&s5);
	
	total=(s1+s2+s3+s4+s5);
	
	printf("\n %d",total);
	
	average=(s1+s2+s3+s4+s5)/5;
	
	printf("\n %.2f",average);
	
	
}
