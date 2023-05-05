// Write a program that finds the largest number among three given numbers.

#include <stdio.h>

int main()
{
    // Creating variables
    int firstNum, secondNumb, thirdNum, key;

    // Getting numbers
    printf("Enter one number: ");
    scanf("%d", &firstNum);

    printf("Enter one more number: ");
    scanf("%d", &secondNumb);

    printf("Enter the last number: ");
    scanf("%d", &thirdNum);

    // Numbers in wrong oder inserted in an array
    int numberArray[] = {firstNum, secondNumb, thirdNum};

    // Insertion sort algorithm
    int i = 1;
    for (i; i < 3; i++)
    {
        key = numberArray[i];
        int j = (i - 1);

        while (j >= 0 && numberArray[j] > key)
        {
            numberArray[j + i] = numberArray[j];
            j = j - 1;
        }
        numberArray[j + 1] = key;
    }

    printf("The biggest number, among the given ones, is %d\n", numberArray[i]);
}
