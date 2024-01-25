#include <stdio.h>
int main()
{
    int l, p;
    scanf("%d%d", &l, &p);

    char a[l][p];
    int C = 0;
    int i, j;

    for (i = 0; i < l; i++)

        for (j = 0; j < p; j++)
        {
            scanf("%c", &a[i][j]);

            if (a[i][j] == '#') C++;
        }

    printf("%d", C);

    return 0;
}
