#include<stdio.h>
int main()
{
    int x,y,n;
    scanf("%d%d%d",&x, &y, &n);

    if (y < x * 3)
        {
         y = y;
        }
    else
        {
         y = x * 3;
        }

    int cost;

    cost = (n % 3) * x + (n / 3) * y;

    printf("%d", cost);

    return 0;
}

