/*
    Input : 5
    Output : -7       ( 8 - 15 ) 

    Input : -5
    Output : -7        ( 8 - 15)

    Input : 10
    Output : 2895        ( 3840 - 945)

*/

int FactorialDiff(int iNo)
{   
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iEvenFact = 1;
    int iOddFact = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return (iEvenFact - iOddFact);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial difference  is %d\n", iRet);


    return EXIT_SUCCESS;

}