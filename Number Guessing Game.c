#include <stdio.h>
int main()
{
    int correctNumber = 18;
    int guessedNumber;
    scanf("%d" , &guessedNumber);

    if (guessedNumber == correctNumber) {
        printf("Your guess is correct");
    }
    else if (guessedNumber > correctNumber) {
        printf("Wrong, your guess is larger");
    }
    else if (guessedNumber < correctNumber){
        printf("Wrong, your guess is smaller");
    }
    return 0;

}
