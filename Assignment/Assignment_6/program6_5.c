//Input : 30000     12      Output -> Bonus = 4500.00
//Input : 20000     7       Output-> Bonus = 2000.00
//Input : 80000     - 15    Output -> Invalid input
//Input : -8000     10      Output-> Invlaid input
//Input : -50000    -9      Output-> Invalid Input

#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float salary, int years)
{
    float fBonus = 0.0f;

    if(salary <= 0 || years <= 0)
    {   
        printf("Invalid Input\n");
        return;
    }
    if(years > 10)
    {
        // 15% bonus of salary
        fBonus = (salary * 15)/ 100 ;
        printf("Bonus is %f\n", fBonus);
    }
    else if(years >= 5  && years < 10)
    {
        // 10% bonus of salary
        fBonus = (salary * 10)/ 100 ;
        printf("Bonus is %f\n", fBonus);
    }
    else
    {
        // 5% bonus of salary
        fBonus = (salary * 5)/ 100 ;
        printf("Bonus is %f\n", fBonus);
    }
}
int main()
{   
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service :");
    scanf("%f %d", &fSalary , &iYears);

    CalculateBonus(fSalary , iYears);

    return EXIT_SUCCESS;
}