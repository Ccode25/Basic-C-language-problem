// Replace ___ with your code
#include <stdio.h>

int main() {

    // get character input
    char alphabet;
    scanf("%c", &alphabet);

    // check if character is in the range 'a' to 'z' or 'A' to 'Z'
    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'z')) {
        printf("Alphabet");
    }
    else {
        printf("Not an Alphabet");
    }

    return 0;
}
