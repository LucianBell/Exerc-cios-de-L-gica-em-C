#include <stdio.h>

int main()
{
    int points;
    char name[100];

    printf("Hello! Let's play a game! First, what is your name?\n");
    scanf("%99[^\n]", &name);

    printf("Ooh, it is so nice to meet you %s!", name);

    return 0;
}
