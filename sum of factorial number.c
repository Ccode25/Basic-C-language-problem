#include <stdio.h>
int main()
{
    int number;
    scanf("%d" , &number);

    int factorial = 1;
    int i = 1;

    while (i <= number){
        factorial = factorial * i;
        i = i + 1;

    }
    printf("The factorial is: %d" , factorial);
    return 0;
}
