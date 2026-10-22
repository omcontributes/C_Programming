// Input : 12
// Output : 1   2   3   4   6

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
      if(iNo % iCnt == 0)
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