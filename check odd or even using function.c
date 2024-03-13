#include <stdio.h>

int checkNumbers(int n) {
    if(n % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d" ,&number);

    int result = checkNumbers(number);
        if (result == 1) {
            printf("The number %d is even" ,number);
        }
        else if (result == 0){
            printf("The number %d is odd" ,number);
        }
        return 0;
}
