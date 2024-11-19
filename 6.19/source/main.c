#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6  // ��l��6�ӭ�

int main() {
    int roll, face, record;
    int frequency[13] = { 0 };  // �ΨӰO���C���I�ƥX�{������

    // �]�m�H���ƥͦ������ؤl
    srand(time(NULL));

    // �Y��l36000��
    for (roll = 0; roll < 36000; roll++) {
        face = rand() % 6 + 1;  // �ͦ�1��6�������H����
        if (roll % 2 == 0)
            record = face;
        if (roll % 2 == 1)
            frequency[record + face]++;

    }

    // ��X���G
    printf("Face\tFrequency\n");
    for (face = 2; face < 13; face++) {
        printf("%d\t%d\n", face, frequency[face]);
    }

    return 0;
}
