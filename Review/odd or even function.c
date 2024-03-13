#include <stdio.h>

int checknumber(int num)
{
    if (num % 2 == 0) {
        return 1;
    }

    else {
        return 0;
    }
}

int main()
{
    int number;
    scanf("%d", &number);

    int result = checknumber(number);

    if (result == 1) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
    return 0;
}
