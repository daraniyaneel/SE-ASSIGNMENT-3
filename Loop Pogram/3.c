/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/

#include<stdio.h>
int main()
{
    int Esum=0,Osum=0, i,num1 = 1,num2 = 2,num3 = 3,num4 = 4,num5 = 5,num6 = 6,num7 = 7,num8= 8,num9 = 9,num10 = 10, even = 0,odd = 0;
   
    for (i = 1; i <= 10; i++)
    {
        printf("Enter %d number : ",i);
        if (num1 == i)
        {
            scanf("%d", &num1);
            if (num1 % 2 == 0)
            {
                even++;
                Esum += num1; 
            }else{
                odd++;
                Osum+= num1;
            }
            
            
        }else if (num2 == i)
        {
            scanf("%d", &num2);
            if (num2 % 2 == 0)
            {
                even++;
                Esum += num2; 
            }else{
                odd++;
                Osum+= num2;
            }
            
        }else if (num3 == i)
        {
            scanf("%d", &num3);
            if (num3 % 2 == 0)
            {
                even++;
                Esum += num3; 
            }else{
                odd++;
                Osum+= num3;
            }
            
        }else if (num4 == i)
        {
            scanf("%d", &num4);
            if (num4 % 2 == 0)
            {
                even++;
                Esum += num4; 
            }else{
                odd++;
                Osum+= num4;
            }
            
        }else if (num5 == i)
        {
            scanf("%d", &num5);
            if (num5 % 2 == 0)
            {
                even++;
                Esum += num5; 
            }else{
                odd++;
                Osum+= num5;
            }
            
        }else if (num6 == i)
        {
            scanf("%d", &num6);
            if (num6 % 2 == 0)
            {
                even++;
                Esum += num6; 
            }else{
                odd++;
                Osum+= num6;
            }
            
        }else if (num7 == i)
        {
            scanf("%d", &num7);
            if (num7 % 2 == 0)
            {
                even++;
                Esum += num7; 
            }else{
                odd++;
                Osum+= num7;
            }
            
        }else if (num8 == i)
        {
            scanf("%d", &num8);
            if (num8 % 2 == 0)
            {
                even++;
                Esum += num8; 
            }else{
                odd++;
                Osum+= num8;
            }
            
        }else if (num9 == i)
        {
            scanf("%d", &num9);
            if (num9 % 2 == 0)
            {
                even++;
                Esum += num9; 
            }else{
                odd++;
                Osum+= num9;
            }
            
        }else if (num10 == i)
        {
            scanf("%d", &num10);
            if (num10 % 2 == 0)
            {
                even++;
                Esum += num10; 
            }else{
                odd++;
                Osum+= num10;
            }
            
        }else{
            printf("run again\n");
        }
        
    }
    
    printf("even num = %d \n odd num = %d\n",even,odd);
    printf("even sum = %d \n odd sum = %d",Esum,Osum);
}
  
