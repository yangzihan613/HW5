#include <stdio.h>


int recursiveMaximum(int array[], int size);

int main() {
    int array[] = { 2, 8, 3, 5, 1, 7 };
    int size = sizeof(array) / sizeof(array[0]);
    int maxValue = recursiveMaximum(array, size);
    printf("�̤j�ȬO: %d\n", maxValue);
    return 0;
}
int recursiveMaximum(int array[], int size) {
    // ��}�C���u���@�Ӥ����ɡA��^�Ӥ���
    if (size == 1) {
        return array[0];
    }

    // ���j�a��X�e size-1 �Ӥ��������̤j��
    int maxOfRest = recursiveMaximum(array, size - 1);

    // ��^���j���ȡA�}�C���̫�@�Ӥ����Τ��e�p��X���̤j��
    if (array[size - 1] > maxOfRest) {
        return array[size - 1];
    }
    else {
        return maxOfRest;
    }
}