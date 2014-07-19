#include <stdio.h>

void arrayPrint(int array[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%3d", array[i]);
    }
    printf("\n");
}

void arrayReverse(int array[], int n)
{
    int tmp;
    int i, j;
    int c = n - 1;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        tmp = array[j];
        array[j] = array[i];
        array[i] = tmp;
    }
}

int gcd(int x, int y)
{
    int r;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

void arrayRotate(int a[], int n, int k)
{
    int d, i, j, mk;
    int b;

    if (n == 0 || k == 0) return;

    d = gcd(n, k);
    mk = (n - k) % n;
    for (i = 0; i < d; i++) {
        b = a[i];
        for (j = 1; j < n / d; j++) {
            a[(i + (j - 1) * mk) % n] = a[(i + j * mk) % n];
        }
        a[(i + k) % n] = b;
    }


    /*
    arrayReverse(a, n);
    arrayReverse(a, k);
    arrayReverse(a+k, n-k);
    */

    /*
    int tmp[n];

    int i;
    for (i = 0; i < n; i++) {
        tmp[(i + k) % n] = a[i];
    }

    for (i = 0; i < n; i++) {
        a[i] = tmp[i];
    }
    */
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
