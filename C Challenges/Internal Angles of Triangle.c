int internalAngle(int a, int b,int c)
{
    int sum = a + b + c;

    if (sum == 180) {
        printf("true");
    }
    else {
        printf("false");
    }
}

int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    internalAngle(num1, num2, num3);
}
