// Accept marks from user and check pass or fail

#include<stdio.h>
main()
{
	int m1,m2,m3,m4,m5;
	float per;
	
	printf("\n\n Enter marks 1 :");
	scanf("%d",&m1);
	
	printf("\n\n Enter marks 2 :");
	scanf("%d",&m2);
	
	printf("\n\n Enter marks 3 :");
	scanf("%d",&m3);
	
	printf("\n\n Enter marks 4 :");
	scanf("%d",&m4);
	
	printf("\n\n Enter marks 5 :");
	scanf("%d",&m5);
	
	per=(m1+m2+m3+m4+m5)/5;
	printf("\n Marks [1] : %d",m1);
	printf("\n Marks [2] : %d",m2);
	printf("\n Marks [3] : %d",m3);
	printf("\n Marks [4] : %d",m4);
	printf("\n Marks [5] : %d",m5);
	printf("\n Marks persentage : %.2f",per);
	

	
	if(per>=70)
	{
		printf("\n grade A");
	}
	else if(per>=60)
	{
		printf("\n gradeB");
	}
	else if(per>=50)
	{
		printf("\n gradeC");
	}
	else
	{
		printf("\n gradeFAIL");
	}
	
	
	
	
	
}
