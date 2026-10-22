#include <stdio.h>
#include <stdlib.h>

void CheckTriangle(int side1, int side2, int side3)
{
    if(side1 > 0 && side2 > 0 && side3 > 0)
    {
        if(side1 + side2 > side3 || side1 + side3 > side2 || side2 + side3 > side1)
        {
            printf("Valid triangle\n");
        }
        else
        {
            printf("Invalid triangle\n");
        }
    }
    else
    {
        printf("Invalid triangle\n");
    }
}
int main()
{   
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides : \n");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}