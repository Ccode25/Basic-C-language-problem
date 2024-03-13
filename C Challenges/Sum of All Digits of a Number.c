#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int sum = 0;


    while (number != 0) {
        int digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
printf("%d", sum);
return 0;
}
