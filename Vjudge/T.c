#include<stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if (a == b && b== c && d == e)
        printf("yes");

    else if (b == c && c == d && e == a)
             printf("yes");

    else if (c == d && d == e && a ==b)
             printf("yes");

    else if ()

    return 0;
}
