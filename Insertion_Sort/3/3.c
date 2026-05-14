                //insertion - 3//

#include<stdio.h>
int main ()
{
    int size;
    printf("Enter the array size:\n");
    scanf("%d", &size);

    float arr[size];

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++)
        {
            scanf("%f", &arr[i]);
        }

    int i, j;
    float key;
    for (i = 1; i < size; i++)
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
    for(int i = 0; i < size; i++)
        {
            printf("%.1f ",arr[i]);
        }
    return 0;
}