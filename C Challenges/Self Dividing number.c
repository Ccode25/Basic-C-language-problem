#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int num = number;
    int flag = 0;

    while (num != 0) {
        int digit = num % 10;

        if (number % digit != 0) {
            flag = 1;
            break;
        }
        num = num / 10;
        flag = 0;
    }
    if(flag == 0) {
        printf("Self Dividing Number");
    }
    else {
        printf("Not a Self Dividing Number");
    }
    return 0;
}
