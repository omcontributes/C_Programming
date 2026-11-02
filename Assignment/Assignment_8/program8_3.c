//  Input : 5
// Output : 120      ( 5 * 4 * 3 * 2 * 1)

//  Input : -5
// Output : 120      ( 5 * 4 * 3 * 2 * 1)

#include <stdio.h>
#include <stdlib.h>

int Factorial(int iNo)
{   
    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iFact = 1;

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}
int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n", iRet);

    return EXIT_SUCCESS;
}