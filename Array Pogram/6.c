/* WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array */


#include<stdio.h>
main()
{
	char a[1][1];
	int i,j;
	
	printf("\n Enter the value :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Array element 2");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\n");
	
	
	
	
}
