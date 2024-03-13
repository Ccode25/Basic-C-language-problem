#include <stdio.h>
int main()
{
    double mark;
    scanf("%lf" , &mark);

    if(mark >= 90){
        printf("A");
    }
    else if (mark >= 80){
        printf("B");
    }
    else if(mark >= 70){
        printf("C");
    }
    else {
        printf("D");
    }
}
