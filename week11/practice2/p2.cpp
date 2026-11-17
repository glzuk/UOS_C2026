#include <stdio.h>
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(void) {
	int num1 = 10, num2 = 20;
	int* a = &num1, * b = &num2;
	swap(a, b);
	printf("num1 value : %d\nnum2 value : %d", num1, num2);
}
