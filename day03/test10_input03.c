// date : 2024-03-13
// desc : 입력

#include <stdio.h>

void main()
{
    int a, b;
    printf("정수 두 개를 입력하시오. > ");
    scanf("%d" "%d", &a, &b);

    int result;
    result = (a < b) ? a : b; // 삼항 연산자
    printf("%d\n", result);
}

/* 정리
  1. 삼항 연산자 : 변수 ? 값1 : 값2
  2. 변수가 참이면 전자, 거짓이면 후자
*/