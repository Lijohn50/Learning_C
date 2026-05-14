#include<stdio.h>
int main()
{
    int size, n;
    scanf("%d%d", &size, &n);

    int arr[size],i;
    for( i = 0; i < n ; i++)
        {
            scanf("%d", &arr[i]);
        }
        int new;
        printf("new num:\n");
        scanf("%d", &new);
        arr[n] = new;

    for( i = 0; i <= n; i++)
        {
            printf("%d\n", arr[i]);
        }
    return 0;
}