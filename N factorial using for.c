#include <stdio.h>
int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d" , &number);
    int total = 1;


    for(int i = 1; i <= number; ++i){

    total = total * i;
    }
    printf("%d" , total);
    return 0;
}
