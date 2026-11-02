// Input : 10
// Output : -12.2222       ( 10 - 32) * 5 / 9 = -12.2222


#include <stdio.h>
#include <stdlib.h>

double FahrenheitToCelsius(float fFahrenheit)
{
    double dCelsius = 0.0;

    dCelsius = (fFahrenheit - 32) * 5 / 9;

    return dCelsius;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter a temperature in Fahrenheit :\n");
    scanf("%f", &fValue);

    dRet = FahrenheitToCelsius(fValue);

    printf("Temperature in Celsius is : %lf \n", dRet);
}