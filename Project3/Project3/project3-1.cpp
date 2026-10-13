#include <stdio.h>

int main(void){

for (int num = 3; num < 6;num++) {
    printf("%dÃþ ÇÇ¶ó¹Ìµå\n",num);

    for (int i = 1; i < num + 1; i++) {
        for (int j = 1; j < num - i + 1; j++) {
            printf(" ");
        }
        for (int k = 1; k < 2 * i; k++) {
            printf("*");
        }
        printf("\n");

    }
}
    

    return 0;
}