// date : 2024-03-13
// desc : 함수

#include <stdio.h>

void func(); // 함수 선언, 함수의 정의가 밑에 있으니 메인 함수 위에서 선언을 해줘야 함

void main()
{
  func(); // 함수 호출
}

void func() // 함수 정의
{
  printf("func()\n");
}
