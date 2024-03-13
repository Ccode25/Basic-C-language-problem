#include <stdio.h>
int main()
{
    int x;
    scanf("%d" , &x);
    int y;
    scanf("%d" , &y);

    int temporary = x;

    x = y;

    printf("%d\n%d" , x , temporary);

    return 0;
}
