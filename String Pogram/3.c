/* Write a program in C to print individual characters of a string in reverse order */

#include<stdio.h>
main(){
	char str[50],rev_str[50];
	int i,j,len;
	printf("Enter string:");
	gets(str);
	
	printf("\nString is:");
	puts(str);
	len = strlen(str);
	for(i=len-1,j=0;i>=0;i--,j++){
		rev_str[j] = str[i];
		
	}
	printf("\nReverse String is:");
	puts(rev_str);
}
