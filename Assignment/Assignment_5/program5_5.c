#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase alphabet\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase alphabet\n");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special charcter\n");
    }
}
int main()
{   
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}