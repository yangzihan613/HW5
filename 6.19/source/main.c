#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6  // 骰子有6個面

int main() {
    int roll, face, record;
    int frequency[13] = { 0 };  // 用來記錄每個點數出現的次數

    // 設置隨機數生成器的種子
    srand(time(NULL));

    // 擲骰子36000次
    for (roll = 0; roll < 36000; roll++) {
        face = rand() % 6 + 1;  // 生成1到6之間的隨機數
        if (roll % 2 == 0)
            record = face;
        if (roll % 2 == 1)
            frequency[record + face]++;

    }

    // 輸出結果
    printf("Face\tFrequency\n");
    for (face = 2; face < 13; face++) {
        printf("%d\t%d\n", face, frequency[face]);
    }

    return 0;
}
