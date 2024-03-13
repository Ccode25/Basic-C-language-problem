#include <stdio.h>
int main()
{
    double sellingPrice;
    scanf("%lf" , &sellingPrice);

    double profitPercentage;
    scanf("%lf" , &profitPercentage);

    double costPrice = (sellingPrice * 100.0) / (100 + profitPercentage);

    printf("%lf" , costPrice);
    return 0;


}
