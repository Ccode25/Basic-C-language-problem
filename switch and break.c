#include <stdio.h>
int main()
{
    // Enter number from 1 to 10
    int num;
    scanf("%d" , &num);

    switch (num)
    {
case 1:
case 3:
case 5:
case 7:
case 9:
    printf("odd number");
    break;

case 2:
case 4:
case 6:
case 8:
case 10:
    printf("even number");
    break;

default :
    printf("Invalid");

    }
    return 0;
}
