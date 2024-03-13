#include <stdio.h>

int getfactorial(int num)
{
    int product = 1;

    for (int i = 1; i <= num; i++) {
        product = product * i;
    }
    return product;
}

int main()
{
    int number;
    scanf("%d", &number);

    int result = getfactorial(number);
    printf("%d\n", result);

    return 0;
}
