#include <stdio.h>

double areacircle(double radius)
{
    double Area = 3.14 * radius * radius;
    return Area;
}

int main()
{
    double r;
    printf("Enter radius of a circle: ");
    scanf("%lf", &r);

    double A = areacircle(r);
    printf("The area of a circle is %.2lf", A);

    return 0;
}
