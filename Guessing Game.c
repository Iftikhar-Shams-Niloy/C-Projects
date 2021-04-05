#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("What is my BIRTHDATE?\n");
    int secret_number = 21;
    int guess; /*Make a variable to take input from the user*/
    int guess_count = 0; /*First assign 0 to the variable you want to use as the guess count*/
    int guess_limit = 3; /*Then set a limit on how many times you actually*/
    int outofguesses= 0; /*Make a variable which will decide when it will stop*/

    while(guess != secret_number && outofguesses == 0){
        if(guess_count < guess_limit){
            printf("Enter Your Guess: ");
            scanf("%d", & guess);
            guess_count++;
        }
        else {
            outofguesses = 1; /*When the Guess-count exceeds Guess-Limit it will add 1 to out-of-guessess. Which will lead the program to
                                understand that, the user is out of guesses*/
        }
    }
    if(outofguesses == 1){
        printf("\nHow can you forget my Birthdate!!!(-_-) \n"); //if out-of-guesses is 1, then it will print, you are unable to guess the number.
    }
    else{
        printf("\n YOU WIN!!!\n");//If out-of-guesses is not 1, It will print, You have guessed it right.
    }
    return 0;
}

