#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;  // Return -1 if the array is NULL
    }

    for (size_t i = 0; i < size; i++) {
        printf("Comparing value at index %zu: %d\n", i, array[i]);
        if (array[i] == value) {
            return i;  // Return the index if the value is found
        }
    }

    return -1;  // Return -1 if the value is not found
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int value = 25;

    int index = linear_search(arr, size, value);

    if (index != -1) {
        printf("Value %d found at index %d\n", value, index);
    } else {
        printf("Value %d not found in the array\n", value);
    }

    return 0;
}
