#include <stdio.h>

int main()
{
    int number;
    int count = 0;
    scanf("%d", &number);


    while (number > 0) {

            number = number / 10;
            count = count + 1;
        }
        printf("%d", count);
        return 0;
    }

