#include<stdio.h>
int main ()
{
    int N;
    printf("Enter the value of N: ");

    scanf("%d", &N);

    if (N < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Non-negative integers less than or equal to %d in descending order:\n", N);
    for (int i = N; i >= 0; --i) {
        printf("%d\n", i);

        }
 return 0;
}
