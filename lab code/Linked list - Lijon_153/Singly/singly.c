#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node
{
    int data;
    struct Node* next;
};

int main()
{
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 1;
    head->next->data = 2;
    head->next->next->data = 3;
    head->next->next->next->data = 4;
    head->next->next->next->next->data = 5;
    head->next->next->next->next->next = NULL;


    struct Node* temp = head;
    printf("\nLinked List: \n");
    while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }

    return 0;
}
