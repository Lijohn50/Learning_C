#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);

    int arr[size],i;
    for( i = 1; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
    for(i = 1; i < size; i++)
        {
            if (i % 2 == 0)
                {
                    printf("%d\n", arr[i]);
                }
        }
    return 0;
}