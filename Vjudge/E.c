#include <stdio.h>
#include <string.h>

int main()
{
    char S[101];
    int v = 0, w = 0;

    scanf("%100s", S);

    int i, t;
    for (i = 0; i < strlen(S); i++)
        {
        if (S[i] == 'v' || S[i] == 'V') v++;
        else if (S[i] == 'w' || S[i] == 'W') w++;
        }

    t = v + 2 * w;

    printf("%d", t);

    return 0;
}
