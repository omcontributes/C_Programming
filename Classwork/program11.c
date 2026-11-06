#include <stdio.h>
#include <stdlib.h>  

int main()
{   
    
    int no = 0;

    printf("Enter number:\n");
    if(scanf("%d", &no) != 1)
    {
        printf("Invalid input");

        return EXIT_FAILURE;   // return to OS
    }

    printf("input is valid\n");
    
    return EXIT_SUCCESS;
}