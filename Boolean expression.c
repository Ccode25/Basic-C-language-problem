#include <stdio.h>
int main()
{
    int number;
    int result;
    scanf("%d" , &number);

    result = number % 5 == 0;



    printf("%d" , result);
    return 0;
}
