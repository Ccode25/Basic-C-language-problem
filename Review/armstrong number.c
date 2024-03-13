#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    int result = 0;

    int temporary = number;

    int remaider;

    int cube;

    while (temporary > 0){

        remaider = temporary % 10;

        cube = remaider * remaider * remaider;

        result = result + cube;

        temporary = temporary / 10;



    }

    if (result == number) {
        printf("Armstrong Number");
    }
    else {
        printf("Not an Armstrong Number");
    }
    return 0;
}
