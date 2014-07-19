#include <stdio.h>

#define END -1

void arrayPrint(int array[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%3d", array[i]);
    }
    printf("\n");
}

int dataCopyn(int src[], int dest[], int n)
{
    int i;
    for (i = 0; i < n - 1 && src[i] != END; i++) {
        dest[i] = src[i];
    }
    dest[i] = END;
    return i;
    /*
    int i = 0;
    while((*dest = *src) != END) {
        if (i == n) {
            *dest = END;
            break;
        }
        src++;
        dest++;
        i++;
    }
    return i;
    */
}

int main()
{
    int array[] = {4, 3, 6, 9, 1, 3, 4, 5, 8, 7};
    int dest[] = {0,0,0,0,0,0,0,0,0,0};

    arrayPrint(array, 10);
    dataCopyn(array, dest, 3);
    arrayPrint(dest, 10);
    dataCopyn(array, dest, 8);
    arrayPrint(dest, 10);

    int a[] = {1,2,3,4,5,6,7,8,9,END};
    int b[] = {1,2,3,END};
    int c[5];
    int i, l;

    l = dataCopyn(a, c, 5);
    for (i = 0; c[i] != END; i++) printf("%4d", c[i]);
    printf("\n%d\n", l);

    l = dataCopyn(b, c, sizeof(c)/sizeof(c[0]));
    for (i = 0; c[i] != END; i++) printf("%4d", c[i]);
    printf("\n%d\n", l);
}
