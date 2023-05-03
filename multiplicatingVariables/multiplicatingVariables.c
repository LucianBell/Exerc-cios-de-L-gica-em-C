#include <stdio.h>

int main()
{
    int firstNumber, secondNumber, multiplication;

    printf("Insert the first number: ");
    scanf("%d", &firstNumber);

    printf("Insert the second number: ");
    scanf("%d", &secondNumber);

    multiplication = (firstNumber * secondNumber);

    printf("The multiplication of the two numbers is %d!\n", multiplication);
}
