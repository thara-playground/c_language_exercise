#include <stdio.h>

void arrayPrint(int array[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%3d", array[i]);
    }
    printf("\n");
}

int arrayIndex(int array[], int n, int val)
{
    int i;
    for (i = 0; i < n; i++) {
        if (array[i]== val) return i;
    }

    return -1;
}

void arrayReverse(int array[], int n)
{
    int tmp;
    int i;
    int c = n - 1;
    for (i = 0; i <= (n / 2) - 1; i++) {
        tmp = array[c - i];
        array[c - i] = array[i];
        array[i] = tmp;
    }
}

int main()
{
    int data[] = {4, 3, 6, 9, 1, 3, 4, 5, 8, 7};
    arrayPrint(data, 5);

    int ret;
    ret = arrayIndex(data, 8, 1);
    //printf("%d\n", ret);

    arrayReverse(data, 5);
    arrayPrint(data, 5);
    arrayReverse(data, 3);
    arrayPrint(data, 5);
    arrayReverse(data, 4);
    arrayPrint(data, 5);
    return 0;
}
