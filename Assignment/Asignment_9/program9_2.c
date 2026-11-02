// 1$ = 70 rupees

//  Input : 10
//  Output: 700

//  Input : 3
//  Output: 210 

//  Input : 1200
//  Output: 84000

#include <stdio.h>
#include <stdlib.h>

int  DollarToINR(int iNo)
{   
    int INRValue  = 0;
    INRValue =  iNo * 70;

    return INRValue;
}

int main()
{  
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);
    
    return EXIT_SUCCESS;
}