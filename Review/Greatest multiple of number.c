int greatestMultiple(int number)
{
    for (int i = 100; i > 1; i--) {
        if (number > 100 || number < 1) {
            printf("Invalid");
            break;
        }
        else if (i % number == 0) {
            printf("%d", i);
            break;
        }
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    greatestMultiple(num);
}
