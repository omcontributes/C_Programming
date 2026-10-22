#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d is greater\n",iNo1);
    }
    else if(iNo1 < iNo2)
    {
        printf("%d is greater\n", iNo2);
        
    }else if(iNo1 == iNo2)
    {
        printf("Both numbers are equal");
    }
}
int main()
{   
    int iValue1 = 0, iValue2 = 0;

    printf("Enter two number :\n");
    scanf("%d  %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}