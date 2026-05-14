#include<stdio.h>

int main ()
    {
        int size, n;
        printf("Enter array size and element count:\n ");
        scanf("%d%d", &size, &n);

        int arr[size],i;
        printf("Enter the elements:\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int position;
        printf("position:");
        scanf("%d", &position);

        for (i = 0; i < n; i++ )
            {
                if (i == (position - 1))
                    {
                        for(i = n-1; i >= (position - 1); i--)
                            {
                                arr[i+1] = arr[i];
                            }
                        printf("\nnew num:");
                        scanf("%d",&arr[position - 1]);
                        break;
                    }
                
            }
        printf("Show the new array:\n");
        for(i = 0; i <= n; i++)
            {
                printf("%d\n", arr[i]);
            }
    return 0;
    }