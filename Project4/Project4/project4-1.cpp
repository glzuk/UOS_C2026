#include <stdio.h>
int aa(int a, int b) {
	return a - b + 3;
}
int main(void) {
	int a;
	int b;
	printf("숫자 두개 입력");
	scanf_s("%d %d", &a, &b);
		printf("%d", aa(a, b));
}