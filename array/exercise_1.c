#include <stdio.h>

void arrayPrint(int array[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%3d", array[i]);
    }
    printf("\n");
}

void arrayInsert(int array[], int n, int newdata, int k)
{
    int i;
    for (i = n - 1; 0 <= i; i--) {
        if (i == k) {
            array[i] = newdata;
            break;
        } else {
            array[i] = array[i - 1];
        }
    }
}

void arrayDelete(int array[], int n, int k)
{
    int i;
    for (i = k; i < n; i++) {
        array[i] = array[i + 1];
    }
}

int main()
{
    int array[] = {4, 3, 6, 9, 1, 3, 4, 5, 8, 7};

    arrayPrint(array, 8);
    arrayInsert(array, 8, 0, 5);
    arrayPrint(array, 8);
    arrayDelete(array, 8, 5);
    arrayPrint(array, 8);
}
