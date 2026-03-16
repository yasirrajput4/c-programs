#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main()
{
    char play_again;

    // Seed random number generator once per run
    srand((unsigned int)time(0));

    do
    {
        // Computer randomly selects 0 (Snake), 1 (Water), or 2 (Gun)
        int computer = rand() % 3;
        int player;
        int valid_input = 0;

        printf("\n=== Snake Water Gun Game ===\n");
        printf("Choose:\n");
        printf("0 for Snake\n");
        printf("1 for Water\n");
        printf("2 for Gun\n");
        printf("Your choice: ");

        // Validate user input
        while (!valid_input)
        {
            if (scanf("%d", &player) != 1 || player < 0 || player > 2)
            {
                printf("Invalid input! Please enter 0, 1, or 2: ");
                while (getchar() != '\n')
                    ; // Clear buffer
                continue;
            }
            valid_input = 1;
        }

        printf("Computer chose: %d\n", computer);

        // Determine winner
        if (computer == player)
        {
            printf("It's a draw!\n");
        }
        else if ((computer == 0 && player == 1) ||
                 (computer == 1 && player == 2) ||
                 (computer == 2 && player == 0))
        {
            printf("Computer wins!\n");
        }
        else
        {
            printf("Player wins!\n");
        }

        // Ask to play again
        printf("\nDo you want to play again? (y/n): ");
        while (getchar() != '\n')
            ; // Clear newline from buffer
        if (scanf("%c", &play_again) != 1)
        {
            printf("Error: Invalid input.\n");
            return 1;
        }

    } while (play_again == 'y' || play_again == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}
