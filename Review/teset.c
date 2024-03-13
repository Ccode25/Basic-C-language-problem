

// Replace ___ with your code
#include <stdio.h>

int main() {

    // an array of numbers
    int numbers[4] = {43, 78, 23, 45};

    // declare new array of the same size
    int newNumbers[4];

    // loop through each element of numbers and multiply them
    for (int i = 0; i < 4; i++) {
        newNumbers[i] = numbers[i] * 10;

    // print the new array
    printf("%d\n", newNumbers[i]);
    }

    return 0;
}
