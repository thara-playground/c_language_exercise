#include <stdio.h>

#define END -1

void dataPrint(int data[])
{
    int i;

    for (i = 0; data[i] != END; i++) {
        printf("%4d", data[i]);
    }
    printf("\n");
}

void dataPrint2(int *data)
{
    while (*data != END) {
        printf("%4d", *data);
        data++;
    }
    printf("\n");
}

int dataLength(int data[])
{
    int i;
    for (i = 0; data[i] != END; i++);
    return i;
}

void dataCopy(int src[], int dest[])
{
    int i;
    for (i = 0; src[i] != END; i++) {
        dest[i] = src[i];
    }
    dest[i] = src[i]; // copy END
}

void dataCopy2(int *src, int *dest)
{
    while (*src != END) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = END;
}

void dataCopy3(int *src, int *dest)
{
    while ((*dest = *src) != END) {
        src++;
        dest++;
    }
}

void dataCopy4(int *src, int *dest)
{
    for (; (*dest = *src) != END; src++, dest++);
}

int main()
{
    int data[] = {4, 3, 6, 9, 7, -1, 8};
    dataPrint(data);
    dataPrint2(data);

    int a;
    a = dataLength(data);
    printf("%d\n", a);

    int dest[a];
    dataCopy(data, dest);
    dataPrint(data);
    dataPrint(dest);

    int dest2[a];
    dataCopy2(data, dest2);
    dataPrint(data);
    dataPrint(dest2);

    int dest3[a];
    dataCopy3(data, dest3);
    dataPrint(data);
    dataPrint(dest3);

    int dest4[a];
    dataCopy4(data, dest4);
    dataPrint(data);
    dataPrint(dest4);

    return 0;
}
