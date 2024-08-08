//find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
main()
{
	int a,w,h,l;
	
	printf("\n\n Enter a width :");
	scanf("%d",&w);
	
	printf("\n\n Enter a height :");
	scanf("%d",&h);
	
	printf("\n\n Enter a length :");
	scanf("%d",&l);
	
	a=2*(w*l+h*l+h*w);
	
	printf("\n\n prisam formula %d",a);
	
	
}
