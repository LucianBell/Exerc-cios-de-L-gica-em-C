// Write a program that prints the sum of all numbers from 1 to 100. That is, it will calculate the result of 1+2+3+4+...+100.
#include <stdio.h>

int main()
{
    int done = 0;
    int currentNumber = 1;

    while (done <= 100)
    {
        currentNumber = (currentNumber + done);
        done++;
    }

    printf("Current number is %d\n", currentNumber);
}
