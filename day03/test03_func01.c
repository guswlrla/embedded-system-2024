// date : 2024-03-13
// desc : 함수

#include <stdio.h>

void func() // 함수선언, 함수정의가 밑에 있으니 메인 함수 위에서 선언을 해줘야 함

void main()
{
  func(); // 함수호출
}

void func() // 함수정의
{
  printf("func()\n");
}
