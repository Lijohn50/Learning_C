#include <stdio.h>

int main()

{
    int N;
    scanf("%d", &N);

    int digit1, digit2, digit;

    digit = N % 100;
    digit1 = digit / 10;
    digit2 = digit % 10;

    printf("%d%d",digit1, digit2);

    return 0;
}
