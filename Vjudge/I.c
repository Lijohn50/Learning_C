#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int hb = 0, hi = 0, ch, i;

    for (i = 1; i <= N; i++)
        {
        scanf("%d", &ch);

        if (ch > hb)
            {
            hb = ch;
            hi = i;
            }
         }

    printf("%d", hi);

    return 0;
}
