#include <stdio.h>
int main()
{
    int n;
    scanf("%d" , &n);

    int combination = (n * (n - 1)) / 2;

    printf("%d" , combination);

    return 0;
}
