#include <stdio.h>
int main()
{
    int jack , roman, johnny;
    scanf("%d\n %d\n %d" , &jack , &roman , &johnny);

    if(jack < roman && jack < johnny) {
        printf("Jack");
    }
    else if(roman < jack && roman < johnny){
        printf("Roman");
    }
    else {
        printf("Johnny");
    }
    return 0;
}
