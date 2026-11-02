// Input : 5.3
// Output : 88.2026


#include <stdio.h>
#include <stdlib.h>

double CalculateArea(float fRadius)
{
    double dArea = 0.0;
    dArea = 3.14 * fRadius * fRadius;
    return dArea;
}
int main()
{   
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius :\n");
    scanf("%f", &fValue);

    dRet = CalculateArea(fValue);

    printf("Area is %lf \n", dRet);

    return EXIT_SUCCESS;
}
