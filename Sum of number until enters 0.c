#include <stdio.h>
int main()
{
    double number;
    printf("enter a number:  ");
    scanf("%lf" , &number);

    double total = 0;

    while(number != 0){
        total = total + number;

        printf("enter a number:  ");
        scanf("%lf" , &number);
    }
    printf("%.2lf" , total);
    return 0;
}
