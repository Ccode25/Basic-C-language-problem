// Replace ___ with your code
#include <stdio.h>

// function to find the smallest element
int findSmallest(int numbers[5]) {
    int smallest = numbers[0];
    for (int i = 0; i < 5; i++) {
        if (smallest > numbers[i]) {
            smallest = numbers[i];
        }
    }

    return smallest;

}

int main() {

    // an array of numbers
    int numbers[5] = {100, 64, 75, 80, 65};

    // call the function to find the smallest element
    int smallest = findSmallest(numbers);
    printf("%d", smallest);

    return 0;
}
