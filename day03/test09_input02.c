// date : 2024-03-13
// desc : 입력

#include <stdio.h>

void main()
{
    int a, b;
    printf("두 개의 정수를 입력하시오. > ");
    scanf("%d" "%d", &a, &b); // scanf("변환문자", &변수명1, &변수명2, ...);

    if(a > b) {
        printf("Max = %d\n", a);
        printf("Min = %d\n", b);
    }
    else if(a < b) {
        printf("Max = %d\n", b);
        printf("Min = %d\n", a);
    }
}

/* 정리
 1. scanf 함수에서 변수가 문자열일 때는 변수 앞에 &를 붙이지 x
*/