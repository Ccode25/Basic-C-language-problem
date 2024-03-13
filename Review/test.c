#include <stdio.h>>
int main()
{
  int num1 = 2;
  int num2 = 3;


for(int i = 4; i <= 100; i++) {
        if (i % num1 == 0 && num2 % i == 0){
            printf("%d", i);
            break;
        }
    }
    return 0;
}
