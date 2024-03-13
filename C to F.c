#include <stdio.h>
int main()
{
    double celsius;

    scanf("%lf" , &celsius);

    double fahrenheit = ( celsius * 1.8 ) + 32;



    printf("%.2lf" , fahrenheit);

    return 0;
}
