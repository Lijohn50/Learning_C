                                    //Bubble - 3//

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
            for(int j = 0; j < size - i - 1; j++)
                {
                    if(arr[j] > arr[j+1])
                        {
                            float temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = temp;
                        }
                }
        }
    printf("\nShow the sorted array:\n");
    for(int i = 0; i < size; i++)
        {
            printf("%.1f\n",arr[i]);
        }
    return 0;
}