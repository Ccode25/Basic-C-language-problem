#include <stdio.h>
int main()
{
    int number;

    while (1) {
        scanf("%d" ,&number);

        if(number < 1 || number > 100) {
            break;
        }
    }
    return 0;
}
