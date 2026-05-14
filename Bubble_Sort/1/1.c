                                    //Bubble - 1//

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
            for(int j = 0; j < 6 - i - 1; j++)
                {
                    if(arr[j] > arr[j+1])
                        {
                            int temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = temp;
                        }
                }
        }
    printf("\nShow the sorted array:\n");
    for(int i = 0; i < 6; i++)
        {
            printf("%d ",arr[i]);
        }
    return 0;
}
