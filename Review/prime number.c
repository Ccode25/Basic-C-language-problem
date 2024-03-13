#include <stdio.h>
 int main()
 {
    int number;
    int sum1 = 0;
    int sum2 = 0;


    scanf("%d", &number);

        for (int i = number -1 ; i >= 1; i--) {
            if (number % i == 0) {
            sum1 = i;
            break;
        }
        }
        for (int a = 2 ; a <= number; a++) {
            if (number % a == 0) {
            sum2 = a;
            break;
        }
        }
     printf("Greatest factor of %d is %d\n", number, sum1);

     printf("The least factor of %d is %d", number, sum2);


     return 0;
}


