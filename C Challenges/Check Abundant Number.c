#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int sum = 0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }
    if (sum > number) {
        printf("Abundant Number");
    }
    else {
        printf("Not an Abundant Number");
    }
    return 0;
}
