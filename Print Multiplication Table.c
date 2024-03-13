#include <stdio.h>
int main()
{
    int num;
    scanf("%d" , &num);
    int i = 1;
    int product = 1;

    while(i <= 10){
        product = i * num;
        printf("%d * %d = %d\n" , num , i , product);
        i = i + 1;
    }
    return 0;
}
