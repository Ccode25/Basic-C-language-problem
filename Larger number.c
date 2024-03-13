#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n1, n2, n3;
    scanf("%d\n %d\n %d" , &n1 , &n2 , &n3);

    bool result = (n1 > n2) && (n2 > n3);
    printf("%d" , result);

    return 0;
}
