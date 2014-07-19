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

}

int main()
{
    int array[] = {4, 3, 6, 9, 1, 3, 4, 5, 8, 7};

    arrayPrint(array, 8);
    arrayPrint(array, 8);
    arrayPrint(array, 8);
}
