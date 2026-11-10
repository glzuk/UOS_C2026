#include <stdio.h>

int main(void) {
    int k[9] = { 0 };
    int n;
    int* p = k;

    printf("숫자를 입력하시오 : ");
    scanf_s("%d", &n);

    for (int i = 0; i < 9; i++) {
        *(p + i) = n * (i + 1);
    }

    for (int i = 0; i < 9; i++) {
        printf("%d X %d = %d\n", n, i + 1, *(p + i));
    }

    return 0;
}