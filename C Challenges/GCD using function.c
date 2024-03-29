// Replace ___ with your code
#include <stdio.h>

// create function findGCD with parameters: num1 and num2
// compute the gcd of two numbers and return it
int findGCD(int num1, int num2) {
    int i;
    if (num1 > num2) {
        i = num1 - 1;
    }
    else {
        i = num2 - 1;
    }

    for (i; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            return i;
            break;
        }
    }
}

int main() {

    // get input values for x and y
    int x, y;
    scanf("%d %d", &x, &y);

    // call findGCD() with arguments x and y
    int gcd = findGCD(x, y);

    // print the returned value
    printf("%d", gcd);
    return 0;
}
