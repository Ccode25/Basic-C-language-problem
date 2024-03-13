// Replace ___ with your code
#include <stdio.h>

int main() {

    double first;
    scanf("%lf", &first);

    // get input value for operator
    char op;
    scanf("%c", &op);

    // get input value of first and second
    double second;
    scanf("%lf", &second);

    switch(op) {
        // perform operations based on the value of op
        // Hint: Follow this format
        case ('+'):
        printf("%.1lf", first + second);
        break;

        // Use cases:
        case '-': // for subtraction
        printf("%.1lf", first - second);
        break;

        case '*':  // for multiplication
        printf("%.1lf", first * second);
        break;

        case '/': //for division
        printf("%.1lf", first / second);
        break;

        // if op doesn't match with any of the cases
        default:
            printf("Error!");
    }

    return 0;
}
