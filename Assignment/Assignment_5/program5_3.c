#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float marks)
{
    if(marks >= 90 && marks <= 100)
    {
        printf("Grade A\n");
    }
    else if(marks >= 75 && marks <= 89)
    {
        printf("Grade B\n");
    }
    else if(marks >= 60 && marks <= 74)
    {
        printf("Grade C\n");
    }
    else if(marks >= 40 && marks <= 59)
    {
        printf("Grade D\n");
    }
    else if(marks < 40 && marks >= 1)
    {
        printf("Fail\n");
    }
    else 
    {
        printf("Invalid Input\n");
    }
}
int main()
{   
    float fMarks = 0.0f;

    printf("Enter marks : \n");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}