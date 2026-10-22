#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int age)
{
    if(age >= 18)
    {
        printf("Eligible for voting\n");
    }
    else if(age < 18 && age >= 1)
    {
        printf("Not Eligible for voting\n");
    }
    else if(age <= 0)
    {
        printf("Invalid age\n");
    }
}
int main()
{   
    int iAge = 0;

    printf("Enter your age : \n");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}