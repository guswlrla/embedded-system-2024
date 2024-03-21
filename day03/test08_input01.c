// date : 2024-03-13
// desc : 입력

#include <stdio.h>

void main()
{
    int n;
    printf("정수 하나를 입력하세요. > ");
    if(scanf("%d", &n) != 1) { // 저장할 변수의 주소를 넣어야 함
        printf("올바른 입력이 아닙니다!!\n");
    }
    else {
        switch(n) {
            case 1:
                printf("1을 입력하셨습니다.\n");
                break;
            case 2:
                printf("2를 입력하셨습니다.\n");
                break;
            case 3:
                printf("3을 입력하셨습니다.\n");
                break;
            case 4:
                printf("4를 입력하셨습니다.\n");
                break;
            case 5:
                printf("5를 입력하셨습니다.\n");
                break;
        }
    }
}

/* 정리
  1. scanf() : 입력값을 받을 때 사용하는 함수
  2. scanf("변환 문자", &변수명);
*/

