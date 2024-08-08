/* Write a program in C to compare two strings without using string library
functions. */

 #include<stdio.h>
 main()
 {
 	char a[50],b[50],c[50];
 	int i,flag=0;
 	
 	printf("\n\n Enter a string 1 :");
 	gets(a);
 	
 	printf("\n\n Enter a string 2 :");
 	gets(b);
 	
 	for(i=0;a[i]!='\0' || b[i]!='\0';i++)
 	{
 		if(a[i]!=b[i])
 		{
 			flag=1;
 			break;
		}
	}
	if(flag==0)
	{
		printf("same string");
	}
	else
	{
		printf("Not same string");
	}
 }
