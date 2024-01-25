#include <stdio.h>
#include <string.h>

int main()
{
    char S[100];
    scanf("%s", S);

    int length = strlen(S);

    if ( length == 1 )
        printf("%s%s%s%s%s%s", S, S, S, S, S, S);

    else if ( length == 2 )
        printf("%s%s%s", S, S, S);

    else  printf("%s%s", S, S);

    return 0;
}
