#include<stdio.h>
int main()
{
    int size,n;
    printf("size and element count:");
    scanf("%d%d", &size, &n);

    int arr[size], i,evencount = 0,count = 0, delete = 0;
    printf("elements:");
    for(i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
    for(i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                {
                    count++;
                }
        }
    if (count == 2)
        {
            for (i = n - 1 ; i >= 0; i--)
            {
            if(arr[i] % 2 == 0)
                {
                    for(int j = i; j < n; j++)
                        {
                            arr[j] = arr[j+1];
                        }
                    delete++;
                    n--;
                    if(delete == 2)
                        {
                            break;
                        }
                }
            }
        }
    else if (count == 1)
        {
            printf("middle num:");
            int middlenum, newnum;
            scanf("%d", &middlenum);
            printf("next num:");
            scanf("%d", &newnum);

            if(n % 2 == 0)
                {
                    for (i = n - 1; i >= (n/2); i--)
                        {
                            arr[i+2] = arr[i];
                        }

                    arr[n/2] = middlenum;
                    arr[(n/2) + 1] = newnum;
                    n += 2;
                }
            else
                {
                    for (i = n - 1; i >= (n/2); i--)
                        {
                            arr[i+2] = arr[i];
                        }

                    arr[(n/2)] = middlenum;
                    arr[(n/2) + 1] = newnum;
                    n += 2;
                }

        }
    else if(count == 0)
        {
            for(i = (n / 2); i < n; i++)
                {
                    arr[i] = arr[i+1];
                }
                
            for(i = n - 2; i >= (n/2) + 1; i--)
                {
                    arr[i+1] = arr[i];
                }
            printf("new element:");
            int newele;
            scanf("%d", &newele);
            arr[(n/2)+1] = newele;
        }
    printf("final array :\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
return 0;
}