// Replace ___ with your code
#include <stdio.h>

// create a function that checks if a number is armstrong
// prints the number is it is an armstrong number
// Hint: Look into the description above to find out the workflow of the checkArmstrong() function
int checkarmstrongs(int number) {
    int num = number;
    int sum = 0;
    while (number != 0) {
        int digit = number % 10;
        int cube = digit * digit * digit;
        sum = sum + cube;
        number/=10;
    }
    if (num == sum) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {

    // get input values for x and y
    int x, y;
    scanf("%d %d", &x, &y);


    // run loop from x to y
    // call checkArmstrong() for each value from x
    while (x <= y) {
      int isarmstrong = checkarmstrongs(x);

        if (isarmstrong) {
            printf("%d\n", x);
        }
        x = x + 1;
    }

    return 0;
}
