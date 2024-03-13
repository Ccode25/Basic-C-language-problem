#include <stdio.h>
int main()
{
    double fahrenheit;
    scanf("%lf" , &fahrenheit);

    double celcius = (fahrenheit - 32) * 5 / 9;

    printf("%lf" , celcius);

    return 0;
}
