#include <stdio.h>


int recursiveMaximum(int array[], int size);

int main() {
    int array[] = { 2, 8, 3, 5, 1, 7 };
    int size = sizeof(array) / sizeof(array[0]);
    int maxValue = recursiveMaximum(array, size);
    printf("最大值是: %d\n", maxValue);
    return 0;
}
int recursiveMaximum(int array[], int size) {
    // 當陣列中只有一個元素時，返回該元素
    if (size == 1) {
        return array[0];
    }

    // 遞迴地找出前 size-1 個元素中的最大值
    int maxOfRest = recursiveMaximum(array, size - 1);

    // 返回較大的值，陣列的最後一個元素或之前計算出的最大值
    if (array[size - 1] > maxOfRest) {
        return array[size - 1];
    }
    else {
        return maxOfRest;
    }
}