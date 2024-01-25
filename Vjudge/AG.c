#include <stdio.h>

int main()
{
    int a, b, sum, avg;

    scanf("%d%d", &a, &b);

    sum = a + b;
    avg = (sum + 1) / 2;

    printf("%d", avg);

    return 0;
}
