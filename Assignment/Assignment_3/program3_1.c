// Input : 7
// Output : 2   4   6   8   10  12  14

// Input : 5
// Output : 2   4   6   8   10

#include <stdio.h>
#include <stdlib.h>
void PrintEven(int iNo)
{   
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    int counter = 0;   // It is used to count how many numbers are print

    iCnt = 1;
    while(iCnt >= 1)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\n", iCnt);
            counter++;
        }
        iCnt++;
        if(counter == iNo)
        {
            return;
        }
    }
    
}
int main()
{   
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}
