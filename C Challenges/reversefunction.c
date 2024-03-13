int reverseNum(int num)
{
    int sum = 0, rem;
    while (num > 0) {
        rem = num % 10;
        sum = (sum * 10) + rem;
        num = num / 10;
    }

    return sum;
}

int main()
{
    int number;
    scanf("%d", &number);

    int result = reverseNum(number);
    printf("%d", result);

    return 0;

}
