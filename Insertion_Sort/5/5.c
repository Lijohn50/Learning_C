                //insertion - 5//


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
    
    int i, key, j;
    char key2[100];
    for (i = 1; i < 4; i++)
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

    printf("Show the sorted names and ids:\n");
    for(int i = 0; i < 4; i++)
        {
            printf("%s %d\n", name[i], id[i]);
        }
    return 0;
}