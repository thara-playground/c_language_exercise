#include <stdio.h>

#define N 10

int get_index_of_max_value(int data[], int len) {
    int maxi;

    int i;
    int max;
    max = 0;
    for (i = 0; i < len; i++) {
        if (max < data[i]) {
            max = data[i];
            maxi = i;
        }
    }

    return maxi;
}

int main()
{
    int data[N] = {4, 3, 6, 9, 1, 3, 4, 5, 8, 7};
    int maxi;

    maxi = get_index_of_max_value(data, N);

    printf("Index of max value = %d\n", maxi);
}
