#include <stdio.h>
int checkperfectnumber(int number) {
    int sum = 0;
    int num = number;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }
    if (sum == number) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int result = checkperfectnumber(n);

    if (result == 1) {
        printf("Perfect Number");
    }
    else {
        printf("Not a Perfect Number");
    }
    return 0;
}
