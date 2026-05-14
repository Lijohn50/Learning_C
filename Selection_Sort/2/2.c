            //selection - 2//

#include<stdio.h>
int main ()
{
    int size;
    printf("Enter the array size:\n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements:\n");
    for(int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
    for(int i = 0; i < size - 1; i++)
        {
            int min = i;
            for(int j = i + 1; j < size; j++)
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
    for(int i = 0; i < size; i++)
        {
            printf("%d ",arr[i]);
        }
    return 0;
}