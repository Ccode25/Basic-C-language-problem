#include <stdio.h>
int main()
{
    int result = 0;
    for (int i = 0; i <= 10; ++i) {
        if (i % 3 == 0) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
