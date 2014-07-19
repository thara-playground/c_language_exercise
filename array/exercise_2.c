#include <stdio.h>

void arrayPrint(int array[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%3d", array[i]);
    }
    printf("\n");
}

void arrayRotate(int a[], int n, int k)
{
    int tmp[n];

    int i;
    for (i = 0; i < n; i++) {
        tmp[(i + k) % n] = a[i];
    }

    for (i = 0; i < n; i++) {
        a[i] = tmp[i];
    }
}

int main()
{
    int array[] = {4, 3, 6, 9, 1, 3, 4, 5, 8, 7};

    arrayPrint(array, 10);
    arrayRotate(array, 4, 1);
    arrayPrint(array, 10);
    arrayRotate(array, 8, 2);
    arrayPrint(array, 10);
}
