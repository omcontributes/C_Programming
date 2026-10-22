// Input :E      Output: TRUE
// Input :d      Output: FALSE
// Input :i      Output: TRUE
// Input :Y      Output: FALSE


#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char CValue)
{
    if(CValue == 'A' ||CValue == 'E'|| CValue == 'I'|| CValue == 'O'|| CValue == 'U'||CValue == 'a'||CValue == 'e'||CValue == 'i'||CValue == 'o'||CValue == 'u' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{   
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter charcter :\n");
    scanf("%c", &cValue);

    bRet  = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return EXIT_SUCCESS;
}