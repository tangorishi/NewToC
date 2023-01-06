#include <stdio.h>

void reverse_array(int *arr, int size) {
    int i, tmp;
    for (i = 0; i < size / 2; i++) {
        tmp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = tmp;
    }
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse_array(arr, size);

    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
