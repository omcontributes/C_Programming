#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive number\n");
    }
    else if(iNo < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero\n");
    }
}
int main()
{   
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
