#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
	int index[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		index[i] = rand() % 11;
		printf("index %d: %d\n", i, index[i]);
	}
	return 0;
}



