// input : 5
// output : 0.464515

// 1 square feet = 0.092903 square meters

#include <stdio.h>
#include <stdlib.h>

double SquareMeter(int iNo)
{
    double dSquareMeter = 0.0;
     
    dSquareMeter = iNo * 0.092903;

    return dSquareMeter;
}
int main()
{   
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is : %lf \n", dRet);

    return EXIT_SUCCESS;
}