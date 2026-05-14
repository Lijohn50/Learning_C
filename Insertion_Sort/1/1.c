                //insertion - 1//

#include<stdio.h>
int main ()
{
    int arr[] = {2, 9, 1, 44, 109, 44};
    printf("Initial array:\n");
    for(int i = 0; i < 6; i++)
        {
            printf("%d ", arr[i]);
        }

    int i, key, j;
    for (i = 1; i < 6; i++)
        {
            key = arr[i];
            j = i - 1;

            while (j >= 0 && arr[j] > key)
                {
                    arr[j + 1] = arr[j];
                    j--;
                }
            arr[j + 1] = key;
        }

    printf("\nShow the sorted array:\n");
    for(int i = 0; i < 6; i++)
        {
            printf("%d ",arr[i]);
        }
    return 0;
}
