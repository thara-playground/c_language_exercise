#include <stdio.h>

#define N 10

int main()
{
    int data[N] = {4, 3, 6, 9, 1, 3, 4, 5, 8, 7};
    int maxi;

    int i;
    int max;
    max = 0;
    for (i = 0; i < N; i++) {
        if (max < data[i]) {
            max = data[i];
            maxi = i;
        }
    }

    printf("Index of max value = %d\n", maxi);
}
