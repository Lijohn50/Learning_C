#include<stdio.h>
#define size 5

int stack[size];
int top = -1;

int push()
    {
        if(top == size - 1)
            {
                printf("Stack is full!!\n");
                return 1;
            }
        else 
            {
                int value;
                printf("Enter value to push: \n");
                scanf("%d", &value);
                top++;
                stack[top] = value;
            }
    }
int pop()
    {
        if(top == -1)
            {
                printf("Stack is empty!!\n");
                return 1;
            }
        else
            {
                top--;
            }
    }
int display()
    {
        if(top == -1)
            {
                printf("Stack is empty!!\n");
                return 1;
            }
        else
            {
                printf("Show the updated stack: \n");
                for(int i = 0; i <= top; i++)
                    {
                        printf("%d\n", stack[i]);
                    }
            }
    }
int main ()
{
    int choice = 0;
    while(choice != 4)
        {
            printf("1.push.\n");
            printf("2.pop.\n");
            printf("3.display.\n");
            printf("4.exit.\n");
            printf("Enter a choice: \n");
            scanf("%d", &choice);

            switch (choice)
                {
                    case 1:
                        {
                            push();
                            break;
                        }
                    case 2:
                        {
                            pop();
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
    return 0;
}