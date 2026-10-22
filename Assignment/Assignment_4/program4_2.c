#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Even Number \n");
    }
    else
    {
        printf("Odd Number \n");
    }
}
int main()
{   
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}