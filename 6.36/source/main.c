#include <stdio.h>

void stringReverse(char* str);

int main() {
    char str[] = "Hello, World!";
    stringReverse(str);
    return 0;
}
void stringReverse(char* str) {
    // �p�G�J��פ�� '\0'�A�������j
    if (*str == '\0') {
        return;
    }
    // ���j�I�s�U�@�Ӧr��
    stringReverse(str + 1);
    // �C�L�ثe���r��
    putchar(*str);
   
}