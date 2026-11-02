// Input :   4 
// Output : -4 -3 -2 -1 0 1 2 3 4 

// Input :   7 
// Output : -7 -6 -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7  


#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{   
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
   
   
}
int main()
{   
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}