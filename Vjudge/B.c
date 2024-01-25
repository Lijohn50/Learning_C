#include <stdio.h>

int main()
{
    int K, i;
    scanf("%d", &K);

    for (i = 0; i < K; i++)
    {
        char ch = 'A' + i;
        printf("%c", ch);
    }

    return 0;
}

