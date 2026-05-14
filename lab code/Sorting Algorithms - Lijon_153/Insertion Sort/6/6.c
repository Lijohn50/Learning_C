                //insertion - 6//


#include<stdio.h>
#include<string.h>
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
    
    int i, key, j;
    char key2[100];
    for (i = 1; i < size; i++)
        {
            key = id[i];
            strcpy(key2, name[i]);
            j = i - 1;

            while (j >= 0 && id[j] > key)
                {
                    id[j + 1] = id[j];
                    strcpy(name[j+1], name[j]);
                    j--;
                }
            id[j + 1] = key;
            strcpy(name[j+1], key2);
        }
    
    printf("Show the sorted names and ids\n");
    for(int i = 0; i < size; i++)
        {
            printf("%s %d\n", name[i], id[i]);
        }
    return 0;
}