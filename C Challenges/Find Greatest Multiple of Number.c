#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int num = 1;

    for (int i = 100; i >= num; i--){
        if (i % number == 0) {
             printf("%d", i);
             break;
        }
}
return 0;
}
