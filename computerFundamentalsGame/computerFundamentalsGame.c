#include <stdio.h>

int main()
{
    int points, anwser;
    char name[100];
    points = 0;

    printf("***************************************************\n");
    printf("*WELCOME TO THE COMPUTER SCIENCE FUNDAMENTALS GAME*\n");
    printf("***************************************************\n");

    printf("Hello! First things first, what is your name?\n");
    scanf("%99[^\n]", &name);

    printf("Ooh, it is so nice to meet you %s!\n", name);
    printf("To awnser the displayed question, just type the number of the anwser you selected\n");
    printf("\n");

    printf("First question: What is the time complexity of a linear search algorithm?\n");
    printf("1 - O(1)\n");
    printf("2 - O(log n)\n");
    printf("3 - O(n)\n");
    scanf("%d", &anwser);

    while (anwser < 1 || anwser > 3) {
        printf("Invalid value! Enter a new anwser: ");
        scanf("%d", &anwser);
    } if (anwser == 1 || anwser == 2) {
        printf("Wrong anwser :/ Try again next time :D\n");
    } else if (anwser == 3) {
        printf("RIGHT ANWSER :D 10 points :D\n");
        points = 10;
    }

    printf("\n");
    printf("Second question: Which data structure follows the Last-In-First-Out (LIFO) principle?\n");
    printf("1 - Queue\n");
    printf("2 - Stack\n");
    printf("3 - Linked list\n");
    scanf("%d", &anwser);

    while (anwser < 1 || anwser > 3) {
        printf("Invalid value! Enter a new anwser: ");
        scanf("%d", &anwser);
    } if (anwser == 1 || anwser == 3) {
        printf("Wrong anwser :/ Try again next time :D\n");
    } else if (anwser == 2) {
        printf("RIGHT ANWSER :D 10 points :D\n");
        points += 10;
    }

    printf("\n");
    printf("Third question: What is the purpose of an index in a database?\n");
    printf("1 - To ensure data integrity\n");
    printf("2 - To provide a unique identifier for each record\n");
    printf("3 - To optimize the search and retrieval of data\n");
    scanf("%d", &anwser);

    while (anwser < 1 || anwser > 3) {
        printf("Invalid value! Enter a new anwser: ");
        scanf("%d", &anwser);
    }
    
    if (anwser == 1 || anwser == 2) {
        printf("Wrong anwser :/ Try again next time :D\n");
    } else if (anwser == 3) {
        printf("RIGHT ANWSER :D 10 points :D\n");
        points += 10;
    }


    printf("\n");
    printf("Game over! Thanks for playing :D \n");
    printf("Your score was %d, %s, congratulations!", points, name);
    return 0;
}
