// Convert minutes into seconds and hours

#include<stdio.h>
main()
{
	int minit,s,h;
	
	printf("\n\n Enter your minite :");
	scanf("%d",&minit);
	
	s=minit*60;
	
	printf(" \n\n second : %d",s);
	
	h=minit/60;
	
	printf(" \n\n hours : %d",h);
}
