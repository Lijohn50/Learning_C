           //Merge - 4//


#include<stdio.h>

void mergesort(float arr[], int beg, int end, int size);
void merge(float arr[], int beg, int mid , int end, int size);
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

    int beg = 0, end = size - 1;
    mergesort(arr, beg, end, size);

    printf("\nShow the sorted array:\n");
    for(int i = 0; i < size; i++)
            {
                printf("%.1f ", arr[i]);
            }
}

void mergesort(float arr[], int beg, int end, int size)
    {
        if (beg  < end)
            {
                int mid = (beg + end) / 2;
                mergesort(arr, beg, mid, size);
                mergesort(arr, mid + 1, end, size);
                merge(arr, beg, mid, end, size);
            }
    }
void merge(float arr[], int beg, int mid , int end, int size)
    {
        int i = beg;
        int j = mid + 1;
        int k = beg;
        float temp[size];

        while(i <= mid && j <= end)
            {
                if(arr[i] >= arr[j])
                    {
                        temp[k] = arr[i];
                        i++;
                        k++;
                    }
                else
                    {
                        temp[k] = arr[j];
                        j++;
                        k++;
                    }
            }
        if(i > mid)
            {
                while(j <= end)
                    {
                        temp[k] = arr[j];
                        k++;
                        j++;
                    }
            }
        else
            {
                while(i <= mid)
                    {
                        temp[k] = arr[i];
                        i++;
                        k++;
                    }
            }
        for(int i = beg; i <= end; i++)
            {
                arr[i] = temp[i];
            }
    }