#include <stdio.h>
void apply_discount(int* price, int n, int percent) {
	for (int i = 0; i < n; i++) {
		price[i] = price[i] * (100 - percent) / 100;
	}
}
void print_prices(int* price,int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", price[i]);
	}
}
int main(void) {
	int price[5] = { 100,1000,3000,50000,3000 };
	printf("할인율(%)을 입력하시오 :");
	int percent;
    scanf_s("%d", &percent);
	printf("할인 전 :");
	print_prices(price, 5);
	apply_discount(price, 5, percent);
	printf("\n할인 후 :");
	print_prices(price, 5);
}