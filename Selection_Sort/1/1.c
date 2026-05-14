            //selection - 1//

#include<stdio.h>
int main ()
{
    int arr[] = {2, 9, 1, 44, 109, 44};
    printf("Initial array:\n");
    for(int i = 0; i < 6; i++)
        {
            printf("%d ", arr[i]);
        }

    for(int i = 0; i < 6 - 1; i++)
        {
            int min = i;
            for(int j = i + 1; j < 6; j++)
                {
                    if(arr[min] > arr[j])
                        {
                            min = j;
                        }
                }

            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }

    printf("\nShow the sorted array:\n");
    for(int i = 0; i < 6; i++)
        {
            printf("%d ",arr[i]);
        }
    return 0;
}
