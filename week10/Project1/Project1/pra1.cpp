#include <stdio.h>

int main(void) {
    int a, b;
    int* p;

    printf("두 정수를 입력하시오 : ");
    scanf_s("%d %d", &a, &b);

    p = &a;
    printf("&a = %p, p = %p\n", &a, p);

    *p = *p * 2;

    p = &b;
    printf("&b = %p, p = %p\n", &b, p);

    *p = *p + 10;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}