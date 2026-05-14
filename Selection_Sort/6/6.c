            //selection - 6//


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
    
    for(int i = 0; i < size - 1; i++)
        {
            int min = i;
            for(int j = i + 1; j < size; j++)
                {
                    if(id[min] > id[j])
                        {
                            min = j;
                        }
                }

            int temp = id[min];
            id[min] = id[i];
            id[i] = temp;

            char temp2[100];
            strcpy(temp2, name[min]);
            strcpy(name[min], name[i]);
            strcpy(name[i], temp2);
        }
    
    printf("Show the sorted names and ids\n");
    for(int i = 0; i < size; i++)
        {
            printf("%s %d\n", name[i], id[i]);
        }
    return 0;
}