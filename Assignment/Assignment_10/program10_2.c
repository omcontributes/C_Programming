//  Input : 5.3    9.78
//  Output : 51.834


#include <stdio.h>
#include <stdlib.h>

double RectangleArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width of reactangle :\n");
    scanf("%f", &fValue1);

    printf("Enter height of reactangle :\n");
    scanf("%f", &fValue2);


    dRet = RectangleArea(fValue1, fValue2);

    printf("Area of reactangle is %lf \n", dRet);
   

    return EXIT_SUCCESS;
}