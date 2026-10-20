#include <stdio.h>

void scan_print(void) {
    int a;

    printf("숫자를 입력하시오: ");
    scanf_s("%d", &a);

    printf("입력한 숫자는 %d", a);
}

int main(void) {
    
    return 0;
}