#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int distinctCount = 0;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int array[] = {a, b, c, d, e};

    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (array[i] == array[j]) {
                array[j] = -1;
            }
        }
    }
    for (int i = 0; i < 5; ++i) {
        if (array[i] != -1) {
            distinctCount++;
        }
    }

    printf("%d", distinctCount);

    return 0;
}
