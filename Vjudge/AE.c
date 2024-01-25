#include<stdio.h>
int main()
{
    int h, w, r,c;
    scanf("%d%d%d%d", &h, &w, &r, &c);

    int count = 0;

    if(r > 1)
        count = count +1;
    if (r < h)
        count = count + 1;
    if (c > 1)
        count = count + 1;
    if (c < w)
        count = count + 1;

    printf("%d", count);

    return 0;
}
