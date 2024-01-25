#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ans= 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans+1);

    return 0;
}
