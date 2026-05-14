            //Merge - 1//

#include<stdio.h>

void mergesort(int arr[], int beg, int end);
void merge(int arr[], int beg, int mid , int end);
int main ()
{
    int arr[] = {2, 9, 1, 44, 109, 44};
    printf("Initial array:\n");
    for(int i = 0; i < 6; i++)
            {
                printf("%d ", arr[i]);
            }
    int beg = 0, end = 5;
    mergesort(arr, beg, end);
    printf("\nSorted array:\n");
    for(int i = 0; i < 6; i++)
            {
                printf("%d ", arr[i]);
            }
    return 0;
}

void mergesort(int arr[], int beg, int end)
    {
        if (beg  < end)
            {
                int mid = (beg + end) / 2;
                mergesort(arr, beg, mid);
                mergesort(arr, mid + 1, end);
                merge(arr, beg, mid, end);
            }
    }
void merge(int arr[], int beg, int mid , int end)
    {
        int i = beg;
        int j = mid + 1;
        int k = beg;
        int temp[6];

        while(i <= mid && j <= end)
            {
                if(arr[i] <= arr[j])
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