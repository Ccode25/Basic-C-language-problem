// Replace ___ with your code
#include <stdio.h>

// function to find the reverse number
int findReverse(int number) {
    int reversed = 0;
    int remainder;

    // run a while loop until number is equal to 0
    // inside the loop find the reverse of number
    // Hint: use logic number % 10 to find the last digit
    // add last digit to reversed number using reversed * 10 + last digit
    while (number != 0) {
        int digit = number % 10;
        reversed = (reversed * 10) + digit;
        number = number / 10;
    }

    return reversed;
}

int main() {

    int number;

    // get input value for number
    scanf("%d", &number);

    // call findReverse() with argument number
    int result = findReverse(number);

    // check if number is equal to the returned value
    if (number == result) {
        printf("Palindrome Number");
    }
    else {
        printf("Not a Palindrome Number");
    }

    return 0;
}
