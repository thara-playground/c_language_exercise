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

int compareByDictionaryOrder(int a1[], int n1, int a2[], int n2)
{
    int i;
    for (i = 0; a1[i] != END && a2[i] != END && a1[i] == a2[i]; i++);
    return a1[i] - a2[i];
    /*
    int i1;
    int i2;
    for (i1 = 0, i2 = 0; i1 < n1 && i2 < n2; i1++, i2++) {
        int e1 = a1[i1];
        int e2 = a2[i2];
        if (e1 != e2) {
            return e1 - e2;
        }
    }

    return n1 - n2;
    */
}

int main()
{
    int a1[] = {1, 2, 3, 4, END};
    int a2[] = {1, 2, 4, 2, END};
    int answer;

    arrayPrint(a1, 4);
    arrayPrint(a2, 4);
    answer = compareByDictionaryOrder(a1, 4, a2, 4);
    printf("%d\n", answer);
    answer = compareByDictionaryOrder(a2, 4, a1, 4);
    printf("%d\n", answer);
    answer = compareByDictionaryOrder(a2, 4, a2, 4);
    printf("%d\n", answer);

    int a3[] = {1, 2, 3};
    int a4[] = {1, 2, 3, 4};

    arrayPrint(a1, 4);
    arrayPrint(a2, 4);
    answer = compareByDictionaryOrder(a3, 3, a4, 4);
    printf("%d\n", answer);
    answer = compareByDictionaryOrder(a4, 4, a3, 3);
    printf("%d\n", answer);
    answer = compareByDictionaryOrder(a3, 3, a3, 3);
    printf("%d\n", answer);
}
