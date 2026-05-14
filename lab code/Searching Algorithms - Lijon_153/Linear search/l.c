#include<stdio.h>
int main()
{
    int size,n;
    printf("Enter array size and element count:\n");
    scanf("%d%d", &size, &n);

    int arr[size];
    printf("Enter the elements: \n");
    for(int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
    printf("Enter the key to search:\n");
    int key;
    scanf("%d", &key);
    int cnt = 0; 
    for(int i = 0; i < size; i++)
        {
            if(arr[i] == key)
                {
                    printf("found!!\n");
                    printf("At positon: %d" , i + 1);
                    cnt++;
                    break;
                }
        }
        if(cnt == 0)
            {
                printf("Not found!!\n");
            }
    return 0;
}
