#include<stdio.h>
#define size 5

int queue[size];
int front = -1;
int rear = -1;

int enqueue()
{
    if ((front == 0 && rear == size - 1) || (rear + 1) % size == front)
        {
            printf("Queue is full!!\n");
            return 1;
        }
    else
        {
            int value;
            printf("Enter a value to enqueue: ");
            scanf("%d", &value);

            if (front == -1)
                {
                    front = 0;
                }
            
            rear = (rear + 1) % size;
            queue[rear] = value;
        }
}

int dequeue()
{
    if (front == -1)
        {
            printf("Queue is empty!!\n");
            return 1;
        }
    else
        {
            if (front == rear)
                {
                    front = rear = -1;
                }
            else
                {
                    front = (front + 1) % size;
                }
        }
}

int display() {
    if (front == -1)
        {
            printf("Queue is empty!!\n");
            return 1;
        }
    else
        {
            printf("Show the updated queue: \n");
            int i = front;
            while (1)
                {
                    printf("%d\n", queue[i]);
                    if (i == rear)
                        {
                            break;
                        }
                    i = (i + 1) % size;
                }
            printf("\n");
        }
}

int main()
{
    int choice = 0;
    while (choice != 4)
        {
            printf("1. enqueue\n");
            printf("2. dequeue\n");
            printf("3. display\n");
            printf("4. exit\n");
            printf("Enter a choice: \n");
            scanf("%d", &choice);

            switch (choice) 
                {
                    case 1:
                        enqueue();
                        break;
                    case 2:
                        dequeue();
                        break;
                    case 3:
                        display();
                        break;
                    case 4:
                        break;
                }
        }
    return 0;
}
