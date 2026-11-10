#include <stdio.h>
int aa(int a) {
	if (a == 1) return 1;
	int result = 0;
	result = a * aa(a - 1);
	return result;
}
int main(void) {
	printf("계산할 팩토리얼 값 입력 :");
		int a;
	scanf_s("%d", &a);
	printf("%d! = %d", a, aa(a));
}