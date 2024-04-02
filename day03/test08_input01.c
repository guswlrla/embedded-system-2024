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
  3. scanf() 함수를 사용하여 문자형 자료를 받을 때는 주의!!
    -> 입력값과 엔터를 입력하면 버퍼에 입력값도 들어가지만, 엔터를 '\n'으로 받아들여 들어감 
       scanf()는 해당 자료형의 값만을 받아들이고 문자인 '\n'은 버퍼에 계속 남아있음
       이 상태에서 scanf()로 문자형을 받아오게 하면 '\n'이 입력돼서 의도한 입력값이 변수에 저장x     
*/

