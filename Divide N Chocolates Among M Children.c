#include <stdio.h>
int main()
{
    int chocolate;
    scanf("%d" , &chocolate);

    int children;
    scanf("%d" , &children);

    printf("%d\n" , chocolate / children);
    printf("%d" , chocolate % children);

    return 0;
}
