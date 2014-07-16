#include <stdio.h>

int main()
{
    int array[] = {4, 3, 6, 9, 1, 3, 4, 5, 8, 7};

    int n = 10;
    int i;
    int k = 3;

    for (i = 0; i < n; i++) {
        printf("%d ", array[(k + i) % n]);
    }
    printf("\n");

    for (i = k; i < k + n; i++) {
        printf("%d ", array[i % n]);
    }
    printf("\n");

    int d = 3;
    int e = 8;
    for (i = 0; i < e; i++) {
        printf("%d ", array[(k + d * i) % n]);
    }
    printf("\n");

    int a;

    for (a = -10; a <= 10; a++) {
        printf("%d ", a % 4);
    }
    printf("\n");

    d = -3;
    e = 10;
    for (i = 0; i < e; i++) {
        printf("%d ", array[((k + d * i) % n + n) % n]);
    }
    printf("\n");
}
