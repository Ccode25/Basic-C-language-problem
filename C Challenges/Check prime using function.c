// Replace ___ with your code
#include <stdio.h>

// create a function that checks if a number is prime or not
// Hint: Look into the challenge description for the working of function
int checkprime(number) {

    for (int i = 2; i < number; i++) {
        if (number % i == 0){
        return 0;
        break;
        }
    }
    return 1;
}

int main() {

    int x, y;
    scanf("%d %d", &x, &y);

    // run the loop from x to y
    // for each iteration of loop call isPrime()
    for (int i = x; i <= y; ++i) {
        int isprime = checkprime(i);

        if (isprime) {
            printf("%d\n", i);
        }
    }

    return 0;
}
