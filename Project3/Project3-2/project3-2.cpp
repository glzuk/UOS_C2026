#include <stdio.h>

int main(void) {
	int num;
	printf("출력할 구구단 단수 입력 :");
	scanf_s("%d", &num);
	int i = 1;
	while (i <= 10) {
		printf("%d X %d\n", num, i);
		i++;
	}

		return 0;
}