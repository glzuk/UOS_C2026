#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    int sum(int num[], int length) {
        int result = 0;

        for (int i = 0; i < length; i++) {
            result += num[i];
        }

        return result;
    }
}
