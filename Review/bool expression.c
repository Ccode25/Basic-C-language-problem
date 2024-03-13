#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d" , &num);


    printf("%d" , num % 5 == 0);

    return 0;
}
