#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    while (1) {
        if (number % 5 == 0 && number % 3 == 0) {
            printf("FizzBuzz");
            break;
        }
        else if (number % 5 == 0) {
            printf("Buzz");
            break;
        }
        else if (number % 3 == 0) {
            printf("Fizz");
            break;
        }
        else {
            printf("%d", number);
            break;
        }
    }
        return 0;
    }



