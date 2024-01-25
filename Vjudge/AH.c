#include<stdio.h>
int main()
{
    int A,B,C,D;
    scanf("%d%d%d%d", &A, &B, &C, &D);

    int left, right;

    left = A + B;
    right = C + D;

    if (left > right)
        printf("Left");

    else if (right > left)
             printf("Right");

    else
        printf("Balanced");

    return 0;

}
