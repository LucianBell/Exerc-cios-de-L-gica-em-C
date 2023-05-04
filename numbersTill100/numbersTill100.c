#include <stdio.h>

#define OBJECTIVE_NUMBER 100

int main()
{

    for (int i = 1; i < (OBJECTIVE_NUMBER + 1); i++)
    {
        printf("Current number: %d\n", i);
    }
    printf("Congratulations! You reached the objective!\n");
}
