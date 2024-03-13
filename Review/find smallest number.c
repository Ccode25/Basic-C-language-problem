


#include <stdio.h>


int main()
{

int n1, n2, n3;
scanf("%d %d %d" ,&n1, &n2, &n3);

int result = (n3 < n1) && (n3 < n2);
printf("%d" , result);

return 0;
}
