#include <stdio.h>
#include<string.h>
int main()
{
    char S[10];
    int x;

    scanf("%s", S);

    if (strcmp(S, "Monday")==0)
        x = 5;
    else if (strcmp(S, "Tuesday")==0)
        x = 4;
    else if (strcmp(S, "Wednesday")==0)
        x = 3;
    else if (strcmp(S, "Thursday")==0)
        x = 2;
    else if (strcmp(S, "Friday")==0)
        x = 1;

    printf("%d", x);

    return 0;

}




