#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    int highest = 0;
    int lowest = 0;
    int sum = 0;

    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
        highest = n1;
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
        highest = n2;
    }

    else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){
        highest = n3;
    }

    else if (n4 > n2 && n4 > n3 && n4 > n1 && n4 > n5){
       highest = n4;
    }

    else{
        highest = n5;
    }

    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5){
        lowest = n1;
    }
    else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5){
        lowest = n2;
    }

    else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5){
        lowest = n3;
    }

    else if (n4 < n2 && n4 < n3 && n4 < n1 && n4 < n5){
        lowest = n4;
    }

    else{
        lowest = n5;
    }

    sum = lowest + highest;
    printf("The lowest number is %d\n", lowest);
    printf("The highest number id %d\n", highest);
    printf("The total sum is %d\n", sum);

    return 0;
}

