// Replace ___ with your code
#include <stdio.h>

// create a function that accepts principal, time, and rate as parameters
// compute the simple interest and return it.
double simpleInterest(double p, double t, double r) {
    double Simple_Interest = (p * t * r) / 100;
    return Simple_Interest;
}

int main() {

    // take input for principal, time, and rate
    double principal, time, rate;
    scanf("%lf %lf %lf", &principal, &time, &rate);

    // call simpleInterest() with arguments: principal, time and rate
    double interest = simpleInterest(principal, time, rate);

    // print simple interest
    printf("%.2lf", interest);

    return 0;
}
