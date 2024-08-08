/*WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/

#include<stdio.h>
int main()
{
    float h ; 
    printf("Enter your height in centimeters : ");
     scanf("%f", &h);

     if (h >= 160 && h < 170)
     {
        printf("Short height");
     }
	 else if (h >= 170 && h <= 180)
     {
        printf("Average height");
     }
	 else if (h >= 180 && h <= 190)
     {
        printf("Tall height");
     }
	 else
	 {
        printf("Height not required");
     }
}

