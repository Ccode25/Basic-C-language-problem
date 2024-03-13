#include <stdio.h>

int getNumber(int num) {
    int number;

  while (1) {
    scanf("%d", &number);

    if (number < 1 || number > 100) {
      break;
    }
return num;
}
}

int main() {


    int number;
    int result = getNumber(number);
    printf("%d", result);

return 0;
}



