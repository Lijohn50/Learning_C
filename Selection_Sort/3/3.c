            //selection - 3//

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

            float temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    printf("\nShow the sorted array:\n");
    for(int i = 0; i < size; i++)
        {
            printf("%.1f ",arr[i]);
        }
    return 0;
}