/* 15.Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>
main()
{
    int math, phy, chem, total, total2;
    printf("Enter your mathematics marks : ");
    scanf("%d", &math);
    printf("Enter your physics marks : ");
    scanf("%d", &phy);
    printf("Enter your chemistry marks : ");
    scanf("%d", &chem);

    if (math >= 65 && phy >= 55 && chem >= 50)
    {
        total = math + phy + chem;
        printf("Total all three subject : %d.\n", total);

        if (total >= 190)
        {
            total2 = math + phy;
            if (total2 >= 140)
            {
                printf("You are eligible.");
            }
            else {
                printf("Your maths and physics total = %d two subject passing marks 140.\n", math + phy);
                printf("You are not eligible bcz Your Maths and physics marks are low.");
            }

        }
        else {
            printf("You are not eligible, passing marks 190.");
        }

    }
    else {
        total = math + phy + chem;
        printf("Total all three subject : %d\n", total);
        if (math <= 65)
        {
            printf("Your maths marks is low.\n");
        }
        if (phy <= 55  )
        {
            printf("Your maths physics is low.\n");
        }
        if (chem <= 50)
        {
           printf("Your maths chemistry is low.\n");
        }
        
        printf("You are not eligible.");
    }
}
