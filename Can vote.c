#include <stdio.h>

int main()
{
    int age;

    printf("The age is " );
    scanf("%d" , &age);

    if (age >= 18){
        printf("The person can vote.");
    }
    else {
        printf("The person cant vote.");
    }
 return 0;
}
