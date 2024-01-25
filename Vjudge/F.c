#include<stdio.h>
int main()
{
    int N, K;
    int a[101];

    scanf("%d%d", &N, &K);

    int i, j;

    for (i = 0; i < N; ++i)
    {
      scanf("%d", &a[i]);

    for (i = 0; i < K; ++i)
    {
        for (j = 0; j < N-1; ++j)
            a[j] = a[j + 1];

    }a[N-1] = 0;

    }

    for (i = 0; i < N; ++i)
    {
        printf("%d", a[i]);
    }

    return 0;

}
