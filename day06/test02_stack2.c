// date : 2024-03-18
// desc : 스택을 연결리스트로 구현

#include <stdio.h>
#define STACK_SZ 10

typedef struct STACK {
  int buf[STACK_SZ]; // 데이터 저장할 공간
  int top;
}stack;

void push(stack*, int); // 선언부분에서는 매개변수 생략 가능

void main()
{
  stack newSt;
  push(&newSt, 10);
  push(&newSt, 3);
  // push(s, 10);
}

void pop()
{

}

void push(stack* st, int value)
{
  st->top = -1;
  st->top++;
  st->buf[st->top] = value;
  printf("%d\n", value);
}
