// Write a program that checks whether a given number is even or odd.
#include <stdio.h>

int main()
{
    int number;

    printf("Enter the number you want to analyze: \n");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("The number is even!");
    }
    else
    {
        printf("The number is odd!");
    }
}
