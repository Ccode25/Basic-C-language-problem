// Replace ___ with your code

#include <iostream>
using namespace std;

int main() {

    int number, sum = 0;

    // use do...while loop to take input and find sum
    // run the loop until the user enters 0
    do {
        cin>>number;
        sum = sum + number;

    } while (number != 0);

    cout << sum;

    return 0;
}
