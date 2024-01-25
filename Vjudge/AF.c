#include<stdio.h>
int main()
{
    int a1, a2, b11 ,b12, b21, b22;
    scanf("%d%d%d%d%d%d",&a1, &a2, &b11, &b12, &b21, &b22);

    if (a1 == 1 && a2 == 1)
        printf("%d", b11);
    if (a1 == 1 && a2 == 2)
        printf("%d", b12);
    if (a1 == 2 && a2 == 1)
        printf("%d", b21);
    if (a1 == 2 && a2 == 2)
        printf("%d", b22);

    return 0;
}
