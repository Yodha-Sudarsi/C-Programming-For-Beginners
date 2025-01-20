// Guess the number
/* Program to guess the number between 0 and 20
The program will tell you if the number is greater or less than the guessed number
The program will also tell you if the number is out of range
The program will give you 5 chances to guess the number
If you guess the number correctly, the program will tell you that you have guessed the number
If you are not able to guess the number in 5 chances, the program will tell you the number
The program will also tell you the number of tries left */

#include<stdio.h>
#include<stdlib.h>
#include<time.h> // for random number generation

int main()
{
    int number, guess, nguesses=1;
    srand(time(0)); // seed for random number generation
    number = rand()%21; // generates random number between 0 and 20
    // printf("The number is %d\n", number);
    // Running the loop until the number is guessed
    do
    {
        // Input the number
        printf("Guess the number between 0 and 20: ");
        scanf("%d", &guess);
        // Check if the number is in range
        if(guess<0 || guess>20)
        {
            printf("Please enter the number between 0 and 20\n");
        }
        // Check if the number is greater than the guessed number
        else if(guess>number)
        {
            printf("Lower number please!\n");
            nguesses++;
        }
        // Check if the number is less than the guessed number
        else if(guess<number)
        {
            printf("Higher number please!\n");
            nguesses++;
        }
        // Check if the number is guessed
        else
        {
            printf("Congratulations! You have guessed the number in %d attempts\n", nguesses);
        }
        // Check if the number of guesses is 5
        if(nguesses==5)
        {
            printf("Sorry! You have exhausted all the attempts\n");
            printf("The number was %d\n", number);
            break;
        }
    } while(1);
    return 0;

}
