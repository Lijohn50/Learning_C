                                    //Bubble - 5//

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
            for(int j = 0; j < 4 - i - 1; j++)
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
    for(int i = 0; i < 4; i++)
        {
            printf("%s %d\n", name[i], id[i]);
        }
    return 0;
}