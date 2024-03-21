// date : 2024-03-13
// desc : 열거형

#include <stdio.h>

void main()
{
  enum season {SPRING = 5, SUMMER, FALL, WINTER} s;
  s = SPRING;
  printf("%d\n", s); // 5

  s = WINTER;
  printf("%d\n", s); // 8
}

/* 정리
  1. 열거형 : 하나의 이름으로 서로 관련있는 값을 갖는 상수 집합
  2. enum 열거형명 { 열거형 변수1, 열거형 변수2, ... };
  3. 열거형 선언 시 기본값 설정 가능
*/