// Input : 12
// Output : 2   4   6   

// Input : 36
// Output : 2   6   12  18 

#include <stdio.h>
#include <stdlib.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    // Updator
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++ )
    {   
        /* 
            if(iCnt % 2 == 0)           // used to check  iCnt is  even or not
            {
                if(iNo % iCnt == 0)
                {
                    printf("%d\n", iCnt);
                }
            }
        */

        if( (iCnt % 2 == 0) && (iNo % iCnt == 0) )
        {
            printf("%d\n", iCnt);
        }
       
    }
}
int main()
{   
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}