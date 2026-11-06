#include "Header.h"    // becuase header file is in current directory
// " " preprocessor searh header file in current dirertory 

// <> preprocessor search header file in system specified path

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////


int main()
{   
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First number:\n");
    if(scanf("%d", &iValue1) != 1)
    {
        fprintf(stderr,"Unalbe to proceed as Input is invalid");

        return EXIT_FAILURE;  // return to OS 
    }

    printf("Enter Second number:\n");
    if(scanf("%d", &iValue2) != 1)
    {
        fprintf(stderr,"Unalbe to proceed as Input is invalid");

        return EXIT_FAILURE;  // return to OS 
    }

    iResult = Addition(iValue1, iValue2);      

    printf("Addition is : %d\n", iResult);

    return EXIT_SUCCESS;         
}

