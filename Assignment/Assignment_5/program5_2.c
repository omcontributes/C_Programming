#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int Year)
{   
    if(Year <= 0)
    {
        printf("Invalid input\n");
    }
    else if(Year % 400 == 0 )
    {
        printf("Leap Year\n");
    }
    else if(Year % 100 == 0)
    {
        printf("Not a leap year\n");
    }
    else if(Year % 4 == 0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
}
int main()
{   
    int iYear = 0;

    printf("Enter year :\n");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}