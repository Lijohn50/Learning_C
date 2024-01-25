#include<stdio.h>
int main()
{
    int x, i;
    scanf("%d", &x);

    for (i = x; i<=3002; i++)
        {if (i % 4 == 2)

         break;
         }

        printf("%d", i);


    return 0;
}
