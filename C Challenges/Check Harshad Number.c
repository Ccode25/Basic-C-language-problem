#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int n = number;
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    if (n % sum == 0) {
        printf("Harshad Number");
    }
    else {
        printf("Not a Harshard Number");
    }
}
