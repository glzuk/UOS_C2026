#include <stdio.h>

int main(void) {
    char name[] = "김세훈";
    int id = 2026440019;
    double grade = 3.33;

    printf("서울시립대학교\n");
    printf("전자전기컴퓨터공학부\n");
    printf("이름 : %s\n", name);
    printf("학번 : %d\n", id);
    printf("학점 : %.2f", grade);

    return 0;
}