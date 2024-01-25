
#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    int a[n], i, ans;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        {
        if (a[i] == x)
        {
            ans = i + 1;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}
