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
    int num;
    printf("Enter a key to search:\n");
    scanf("%d", &num);
    int cnt = 0;
    int beg = 0, end = size - 1;
    while(beg < end)
        {
            int mid = (beg + end) / 2;
            if(arr[mid] == num)
                {
                    printf("found!!\n");
                    printf("At position: %d\n", mid + 1);
                    cnt++;
                    break;
                }
            else if(num > arr[mid])
                {
                    beg = mid + 1;
                }
            else if(num < arr[mid])
                {
                    end = mid - 1;
                }
        }
    if(cnt == 0)
        {
            printf("not found!!\n");
        }
    return 0;
}