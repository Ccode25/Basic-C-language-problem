#include <stdio.h>
int main()
{
    int number;
    scanf("%d" , &number);
    int total = 0;
    int i = 1;

    while(i <= number){
         total = total + i;
         i = i + 1;
    }
     printf("%d" , total);
    return 0;
}
