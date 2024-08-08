/* WAP program to print below output using for loop
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
..............
..............
41 42 43 44 45 46 47 48 49 50 */

#include<stdio.h>
main()
{
	int i;
	
	for(i=01;i<=10;i++)
	{
		printf(" %d",i);
	}
	printf("\n");
	for(i=11;i<=20;i++)
	{
		printf(" %d",i);
	}
	printf("\n");
	for(i=21;i<=30;i++)
	{
		printf(" %d",i);
	}
	printf("\n");
	for(i=31;i<=40;i++)
	{
		printf(" %d",i);
	}
	printf("\n");
	for(i=41;i<=50;i++)
	{
		printf(" %d",i);
	}
	printf("\n");
}
