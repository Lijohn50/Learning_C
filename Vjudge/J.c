#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d%d", &A, &B);

    double ans = (double)B / A;
    printf("%.3lf", ans);

    return 0;
}
