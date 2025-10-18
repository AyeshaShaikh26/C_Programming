/*
Name :Ayesha Ilias Shaikh 
UIN :251M024
Class : Mechanical
Div : F 
*/
#include <stdio.h>

int main()
{
    float Physics,Chemistry,Maths,Average;
    printf("Enter Physics Marks\n");
    scanf("%f",&Physics);
    printf("Enter Chemistry Marks\n");
    scanf("%f",&Chemistry);
    printf("Enter Maths Marks\n");
    scanf("%f",&Maths);
    Average=(Physics+Chemistry+Maths)/3.0;
    printf("The Average Marks of PCM is %f\n",Average);
    
    (Average>=50)?printf("the Student is eligible for Admission\n"):
    printf("The Student is not eligible for Admission\n");
    return 0;
}
