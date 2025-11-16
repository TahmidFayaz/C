#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random,guess;
    int guess_count=0;
    srand(time(NULL));  //First jei number diye seed kora shuru korbe 
    printf("Welcome to the Number Guessing Game!\n");
    random = rand() % 100 + 1;

    do{
        printf("\nPlease enter a number between 1 and 100\n");
        scanf("%d",&guess);
        guess_count++;

        if (guess < random){
            printf("Number is lower !\n");
        }
        else if (guess > random){
            printf("Too high! Try again.\n");
        }
        else{
            printf("Congratulations! You've guessed the correct number.\n");
            printf("You took %d attempts to guess the number", guess_count);
        }


    }while (guess !=random);

    printf("Thanks for Playing\n");




    return 0;
}