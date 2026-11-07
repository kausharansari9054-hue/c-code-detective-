#include <stdio.h>

int main() {
    int score, answer;
    char playAgain;

    do {
        score = 0;

        printf("\n=== C CODE DETECTIVE ===\n");
        printf("Find the bug!\n\n");

        printf("Question 1:\n");
        printf("int a = 5\n");
        printf("1. Bracket\n");
        printf("2. Semicolon\n");
        printf("3. Variable\n");
        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == 2) {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Answer is 2.\n");
        }

        printf("\nQuestion 2:\n");
        printf("if (a = 10)\n");
        printf("Which operator compares values?\n");
        printf("1. ==\n");
        printf("2. =\n");
        printf("3. +=\n");
        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == 1) {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Answer is 1.\n");
        }

        printf("\n=== GAME OVER ===\n");
        printf("Your final score: %d\n", score);

        printf("\nPlay Again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nThanks for playing!\n");

    return 0;
}
