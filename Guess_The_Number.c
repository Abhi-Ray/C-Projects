#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int generate, number, guess, attempts = 1;
    srand(time(0));
    generate = rand() % 100 + 1; // this will generate a random number between 1 to 100

    //loop for guessing the numbers
    do
    {
        printf("Enter the number\n");
        scanf("%d", &number);
        if (generate < number)
        {
            printf("Lower Number Please\n");
        }
        else if (generate > number)
        {
            printf("Higher Number Please\n");
        }
        else
        {
            printf("Congratulations You Guessed The Number In %d Attempts\n", attempts);
        }
        attempts++;
    } while (generate != number);
    return 0;
}