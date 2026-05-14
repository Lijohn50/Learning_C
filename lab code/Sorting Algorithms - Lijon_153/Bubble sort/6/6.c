                 //Bubble - 6//


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
            for(int j = 0; j < size - i - 1; j++)
                {
                    if(id[j] > id[j+1])
                        {
                            int temp = id[j];
                            id[j] = id[j+1];
                            id[j+1] = temp;

                            char temp2[100];
                            strcpy(temp2, name[j]);
                            strcpy(name[j], name[j+1]);
                            strcpy(name[j+1], temp2);
                        }
                }
        }
    
    printf("Show the sorted names and ids\n");
    for(int i = 0; i < size; i++)
        {
            printf("%s %d\n", name[i], id[i]);
        }
    return 0;
}