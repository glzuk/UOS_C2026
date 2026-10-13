#include <stdio.h>  
#include <stdlib.h> 
#include <time.h>    

int main(void)
{
    int answer;         
    int guess = 0;      
    int count = 0;     
    srand(time(NULL));


    answer = rand() % 100 + 1;

    printf("업다운 숫자 맞추기 게임\n");
    printf("1~100 사이의 정답을 맞혀 보세요.\n");

    
    do {
        printf("숫자 입력: ");
        scanf_s("%d", &guess);  
        count++;

        if (guess > answer) {
            printf("down\n");  
        }
        else if (guess < answer) {
            printf("up\n");    
        }
    } while (guess != answer); 

    printf("정답: %d, 시도 횟수: %d회\n", answer, count);
}