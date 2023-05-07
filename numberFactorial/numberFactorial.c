//Write a program that calculates the factorial of a given number.
#include <stdio.h>

int main()
{
    int num, control;
    long factorial;
    printf("Enter a number to recieve its factorial: ");
    scanf("%d", &num);
    factorial = num;
    control = num;

    for (int i = 0; i < (num-1); i++) {
        factorial = factorial * (control - 1);
        control--;
    }

    printf("The number's factorial is %d\n", factorial);
}
