// Replace ___ with your code
#include <stdio.h>

// create function findLCM() with parameters num1 and num2
// compute lcm of two values and return it
int findLCM(int num1, int num2) {
    int i;
    if (num1 > num2) {
        i = num1 + 1;
    }
    else {
        i = num2 + 1;
    }
    while (1) {
        if (i % num1 == 0 && i % num2 == 0) {
            break;

        }

        i++;
    }
    return i;
}

int main() {

    // get input value for x and y
    int x, y;
    scanf("%d %d", &x, &y);

    // call findLCM() with arguments x and y
    int lcm = findLCM(x, y);

    // print the returned value
    printf("%d", lcm);

    return 0;
}
