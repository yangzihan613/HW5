#include <stdio.h>

int binarySearch(int array[], int start, int end, int key);

int main() {
    int array[7];
    int n = sizeof(array) / sizeof(array[0]);
    int key;
    int result;

    for (int i = 0; i <= 6; i++)
        scanf("%d", &array[i]);

    scanf("%d", &key);
    result = binarySearch(array, 0, n - 1, key);

    if (result != -1)
        printf("Element is present at index %d\n", result+1);
    else
        printf("Element is not present in array\n");

    return 0;
}

int binarySearch(int array[], int start, int end, int key) {
    if (start <= end) {
        int mid = start + (end - start) / 2;

        if (array[mid] == key)
            return mid;

        if (array[mid] > key)
            return binarySearch(array, start, mid - 1 , key);

        return binarySearch(array, mid + 1 , end, key);
    }

    return -1;
}
