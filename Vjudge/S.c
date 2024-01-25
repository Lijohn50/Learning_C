#include<stdio.h>
#include<string.h>

int main()
{
    char S[100];
    scanf("%s", S);

    int C;

    C = strlen(S)/2;

    printf("%c", S[C]);

    return 0;
}
