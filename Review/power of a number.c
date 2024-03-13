#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int power;
    printf("Enter the power: ");
    scanf("%d", &power);
    int result = 1;

    for (int i = 1; i <= power; i++) {
        result = number * result;
    }
    printf("%d", result);
    return 0;
}
