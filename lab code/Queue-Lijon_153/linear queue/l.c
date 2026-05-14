#include<stdio.h>
#define size 5

int queue[size];
int front = -1;
int rear = -1;

int enqueue()
    {
        if(front == 0 && rear == size -1)
            {
                printf("Queue is full!!\n");
                return 1;
            }
        else    
            {
                if(front == -1)
                    {
                        front = 0;
                    }
                rear++;
                int value;
                printf("Enter a value to enqueue:\n");
                scanf("%d", &value);
                queue[rear] = value;
            }
    }
int dequeue()
    {
        if(front == -1 && rear == -1 || front > rear)
            {
                printf("Queue is empty!!\n");
                return 1;
            }
        else 
            {
                front++;
            }
    }
int display()
    {
        if(front == -1 && rear == -1 || front > rear)
            {
                printf("Queue is empty!!\n");
                return 1;
            }
        printf("Show the upated queue:\n");
        for(int i = front; i <= rear; i++)
            {
                printf("%d\n", queue[i]);
            }
    }
int main()
{
    int choice = 0;
    while(choice != 4)
        {
            printf("1.enqueue.\n");
            printf("2.dequeue.\n");
            printf("3.display.\n");
            printf("4.exit.\n");
            printf("Enter a choice: \n");
            scanf("%d", &choice);

            switch (choice)
                {
                    case 1:
                        {
                            enqueue();
                            break;
                        }
                    case 2:
                        {
                            dequeue();
                            break;
                        }
                    case 3:
                        {
                            display();
                            break;
                        }
                    case 4:
                        {
                            break;
                        }
                }
        }

}
