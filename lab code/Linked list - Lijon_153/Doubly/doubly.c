#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};

int main()
{
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 1;
    head->prev = NULL;

    head->next = malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->prev = head;

    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 3;
    head->next->next->prev = head->next;

    head->next->next->next = malloc(sizeof(struct Node));
    head->next->next->next->data = 4;
    head->next->next->next->prev = head->next->next;

    head->next->next->next->next = malloc(sizeof(struct Node));
    head->next->next->next->next->data = 5;
    head->next->next->next->next->prev = head->next->next->next;
    head->next->next->next->next->next = NULL;


    struct Node* temp = head;
    printf("\nLinked List in Forward:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

 
    temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    printf("\nLinked List in Reverse:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->prev;
    }

    return 0;
}
