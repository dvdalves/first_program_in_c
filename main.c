#include <stdio.h>

int main()
{
    printf("****************************************\n");
    printf("*      Welcome to the guessing game    *\n");
    printf("****************************************\n");

    int secretNumber = 42;
    int guess;

    printf("What is your guess? ");
    scanf("%d", &guess);
    printf("Your guess is %d", guess);
}
