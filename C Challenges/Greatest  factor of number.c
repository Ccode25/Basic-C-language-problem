// Replace ___ with your code
#include <stdio.h>

int main() {

    // get input value for number
    int number;
    scanf("%d", &number);

    // run the loop from number - 1 to 1
    for (int i = number - 1; i >= 1; --i) {

        // check if number is divisible by i
        // if true, print the value of i and break the loop
        if (number % i == 0) {
            printf("%d" ,i);
            break;

        }

    }

    return 0;
}
