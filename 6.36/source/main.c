#include <stdio.h>

void stringReverse(char* str);

int main() {
    char str[] = "Hello, World!";
    stringReverse(str);
    return 0;
}
void stringReverse(char* str) {
    // 如果遇到終止符 '\0'，結束遞迴
    if (*str == '\0') {
        return;
    }
    // 遞迴呼叫下一個字元
    stringReverse(str + 1);
    // 列印目前的字元
    putchar(*str);
   
}