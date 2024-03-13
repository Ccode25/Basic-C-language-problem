#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int factor = 0;

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            factor = 1;
            break;
        }
    }
    if (factor == 1) {
        printf("Not a Prime Number");
    }
    else {
        printf("Prime Number");
    }
}
