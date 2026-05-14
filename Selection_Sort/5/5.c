            //selection - 5//

#include<stdio.h>
#include<string.h>
int main ()
{
    char name[][100] = {"john", "doe", "loki", "jinx"};
    int id[] = {2,5,3,1};

    printf("Initial names and ids:\n");
    for(int i = 0; i < 4; i++)
        {
            printf("%s %d\n", name[i], id[i]);
        }
    
    for(int i = 0; i < 4 - 1; i++)
        {
            int min = i;
            for(int j = i + 1; j < 4; j++)
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

    printf("Show the sorted names and ids:\n");
    for(int i = 0; i < 4; i++)
        {
            printf("%s %d\n", name[i], id[i]);
        }
    return 0;
}