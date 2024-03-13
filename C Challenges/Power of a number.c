#include <stdio.h>

int main()
{
    int number, power;
    scanf("%d" "%d", &number, &power);
    int result = 1;


    for (int i = 1; i <= power; i++){
        result = result * number;
    }
    printf("%d", result);
    return 0;
}
