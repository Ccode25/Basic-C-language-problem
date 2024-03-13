// Replace ___ with your code
#include <stdio.h>

int main() {

    // get input value for number
    int number;
    scanf("%d", &number);

    // create flag variable with value 0
    int flag = 0;

    // run loop from 2 to number - 1
    // check if number is divisible by number between 2 to number - 1
    for (int i = 2; i <= number - 1; i++) {
        if (number % i == 0) {
            flag = flag + 1;
            break;
        }

    // check if flag is 1 and print either Not a Prime Number or Prime Number

    }
    if (flag == 1) {
        printf("Not a Prime Number");
    }
    else {
        printf("Prime Number");
    }

    return 0;
}
