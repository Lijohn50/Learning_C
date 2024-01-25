#include <stdio.h>

int main()
{
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);

    if(a == b)
        printf("%c", c);
    else if (b == c)
        printf("%c", a);
    else if (a == c)
        printf("%c", b);
    else if (a == b && b == c)
        printf("0");
    else
        printf("%c", a);

    return 0;
}
