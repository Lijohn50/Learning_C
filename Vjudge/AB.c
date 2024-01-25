#include <stdio.h>

int main()
{
    int x, y, z;
    int a, b, c;

    scanf("%d%d%d", &x, &y, &z);



    if (x <= y && x <= z)
    {
        a = x;
        if (y <= z)
        {
            b = y;
            c = z;
        }
        else
        {
            b = z;
            c = y;
        }
    }
    else if (y <= x && y <= z)
    {
        a = y;
        if (x <= z)
        {
            b = x;
            c = z;
        }
        else
        {
            b = z;
            c = x;
        }
    }
    else
    {
        a = z;
        if (x <= y)
        {
            b = x;
            c = y;
        }
        else
        {
            b = y;
            c = x;
        }
    }

    if ( y == b )
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
