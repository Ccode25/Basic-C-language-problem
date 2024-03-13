#include <stdio.h>
int main()
{
    int num;


    while(1){
        scanf("%d" , &num);

       if (num <= 0 || num > 100){
        break;
    }
     printf("%d\n" , num);
    }

    return 0;
}
