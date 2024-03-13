#include <stdio.h>

int Addnumber(int num) {

    int sum = 0;

    for (int i = 1; i <= num; i++) {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int number;
    scanf("%d", &number);

    int result = Addnumber(number);
    printf("%d\n", result);

    return 0;
}
