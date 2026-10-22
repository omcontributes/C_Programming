#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int units)
{
    float fBill = 0.0f;

    if(units <= 0)
    {
        printf("Invalid Input\n");
    }
    else if(units >= 1 && units <= 100)
    {
        fBill = units * 5;
        printf("Bill is %f\n", fBill);
    }
    else if(units >= 101 && units <=200)
    {
        fBill = units * 7;
        printf("Bill is %f\n", fBill);
    }
    else if(units > 200)
    {
        fBill = units * 10;
        printf("Bill is %f\n", fBill);
    }
}

int main()
{   
    int iUnits = 0;

    printf("Enter consumed units : \n");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}

