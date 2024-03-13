#include <stdio.h>
int main()
{
    int number;
    int sum = 0;

    while(1) {
        if (number == 0) {
            break;
        }
        scanf("%d" ,&number);
        sum = sum + number;

    }

    printf("%d" ,sum);

    return 0;
}


