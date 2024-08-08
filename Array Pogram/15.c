#include<stdio.h>
main()
{
	int a[5],i,j,temp;
	
	printf("\n Enter number:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n array element");
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	
	}
}
