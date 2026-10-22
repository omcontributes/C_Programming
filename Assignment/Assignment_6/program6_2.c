#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float marks, int age)
{
    if((marks <= 0 || marks > 100 ) || age <= 0 )
    {
        printf("Invalid Input\n");
    }
    else if(marks >= 60 && age >= 17)
    {
        printf("Eligible for admission\n");
    }
    else
    {
        printf("Not eligible for admisson\n");
    }
}
int main()
{   
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age \n");
    scanf("%f %d", &fMarks , &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}