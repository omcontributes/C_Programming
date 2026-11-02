// Input : 5
// Output : 5000

// Input : 12
// Output : 12000

#include <stdio.h>
#include <stdlib.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value in km:\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Value in meter is : %d\n", iRet);

    return EXIT_SUCCESS;


}