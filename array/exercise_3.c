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

void dataCopyn(int src[], int dest[], int n)
{
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
}
