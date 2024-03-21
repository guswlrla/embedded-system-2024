// date : 2024-03-13
// desc : 함수

#include <stdio.h>

int sumf(int, int); // 함수 선언
int minusf(int, int); // 함수 선언

void main()
{
  int sResult = sumf(10, 20); // 함수 호출
  int mResult = minusf(20, 10);
  printf("더한 값은%d 이고, 뺀 값은%d 입니다.\n", sResult, mResult); // 출력은 메인함수에서 함
}

int sumf(int a, int b) // 함수 정의
{
  return a+b;
}

int minusf(int a, int b) // 함수 정의
{
  return a-b;
}
