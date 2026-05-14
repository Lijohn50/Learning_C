           //Merge - 6//

#include<stdio.h>
#include<string.h>

void mergesort(int id[], char name[][100], int beg, int end, int size);
void merge(int id[], char name[][100], int beg, int mid, int end, int size);
int main ()
{
    int size;
    printf("Enter the student count:\n");
    scanf("%d", &size);

    char name[size][100];
    int id[size];

    printf("Enter the names and ids:\n");
    for(int i = 0; i < size; i++)
        {
            printf("Name of student %d:", i + 1);
            scanf("%s", name[i]);
            printf("Id of student %d:", i + 1);
            scanf("%d", &id[i]);
        }
    int beg = 0, end = size - 1;
    mergesort(id, name, beg, end, size);

    printf("Show the sorted names and ids\n");
    for(int i = 0; i < size; i++)
        {
            printf("%s %d\n", name[i], id[i]);
        }
    return 0;
}

void mergesort(int id[], char name[][100], int beg, int end, int size)
    {
        if(beg < end)
            {
                int mid = (beg + end) / 2;
                mergesort(id, name, beg, mid, size);
                mergesort(id, name,  mid + 1, end, size);
                merge(id, name, beg, mid, end, size);
            }
    }

void merge(int id[], char name[][100], int beg, int mid, int end, int size)
    {
        int i = beg;
        int j = mid + 1;
        int k = beg;

        int temp[size];
        char temp2[size][100];

        while(i <= mid && j <= end)
            {
                if(id[i] <= id[j])
                    {
                        temp[k] = id[i];
                        strcpy(temp2[k], name[i]);
                        k++;
                        i++;
                    }
                else 
                    {
                        temp[k] = id[j];
                        strcpy(temp2[k], name[j]);
                        k++;
                        j++;
                    }
            }
        if(i > mid)
            {
                while(j <= end)
                    {
                        temp[k] = id[j];
                        strcpy(temp2[k], name[j]);
                        k++;
                        j++;
                    }
            }
        else
            {
                while(i <= mid)
                    {
                        temp[k] = id[i];
                        strcpy(temp2[k], name[i]);
                        k++;
                        i++;
                    }
            }
        for(int i = beg; i <= end; i++)
            {
                id[i] = temp[i];
                strcpy(name[i], temp2[i]);
            }
        
    }