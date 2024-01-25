#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);

    int ind = -2;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a')
        {
            ind = i;
        }
    }

    printf("%d\n", ind + 1);

    return 0;
}

