#include<stdio.h>
int main()
{
    int l1,l2,r1,r2;
    scanf("%d%d%d%d", &l1, &l2, &r1, &r2);

    int i, j;
    for (i = l1; i < l2; i++)
        for (j = r1; i < r2; j++)

             if (i == j)
                 break;
    printf("%d", j);
    return 0;
}

