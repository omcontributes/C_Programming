// Input : 4
// Output: 4   8   12   16   20

// Input : 7
// Output: 7    14    21    28    35


#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{   
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iCnt * iNo);
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}