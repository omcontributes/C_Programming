#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float purchaseAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(purchaseAmount <= 0)
    {
        printf("Invalid\n");
    }
    else if(purchaseAmount < 1000)
    {
        fDiscount = (purchaseAmount * 0)/100 ;
        fFinalAmount = purchaseAmount - fDiscount;
        printf("Payable amount is %f : ", fFinalAmount);
    }
    else if(purchaseAmount >= 1000 && purchaseAmount < 5000)
    {
        fDiscount = (purchaseAmount * 10)/100 ;
        fFinalAmount = purchaseAmount - fDiscount;
        printf("Payable amount is %f : ", fFinalAmount);
    }
    else
    {
        fDiscount = (purchaseAmount * 20)/100 ;
        fFinalAmount = purchaseAmount - fDiscount;
        printf("Payable amount is %f : ", fFinalAmount);
    }
}
int main()
{   
    float fAmount = 0.0f;

    printf("Enter purchase amount : \n");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}