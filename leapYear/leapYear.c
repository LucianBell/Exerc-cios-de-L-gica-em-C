// Write a program that checks whether a given year is a leap year or not.

#include <stdio.h>

int main()
{
    int year;

    printf("Write the year you want to analyze: \n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("The year %d is a leap year!", year);
    }
    else
    {
        printf("The year %d is not a leap year!", year);
    }
}
