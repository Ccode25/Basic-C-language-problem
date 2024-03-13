#include <stdio.h>

// function to find the average marks
double findAverage(double marks[5]) {
  double sum = 0.0;

  for (int i = 0; i < 5; ++i) {
    sum = sum + marks[i];
  }

  double average = sum / 5;

  return average;
}

int main() {

  double numbers[5] = {54.8, 59.8, 48.7, 42.6, 60.1};

  // call the function with array as argument
  double result = findAverage(numbers);
  printf("%.2lf", result);    // Output: 53.20

  return 0;
}
