// date : 2024-03-18
// desc : 스택을 연결리스트로 구현

#include <stdio.h>
#define STACK_SZ 10

typedef struct STACK {
  int buf[STACK_SZ]; // 데이터 저장할 공간
  int top; // 스택 가장 위에 있는 요소를 나타내는 인덱스
}stack;

void push(stack*, int); // 선언부분에서는 매개변수 생략 가능
int pop(stack*);

void main()
{
  stack newSt; // 구조체 변수 선언
  newSt.top = -1; // 스택 값  초기화, 구조체 변수에 접근할 때, 도트연산자 사용
  push(&newSt, 10);
  push(&newSt, 3);

  printf("%d\n", pop(&newSt));
  printf("%d\n", pop(&newSt));
}

int pop(stack* st)
{
  if(isEmpty(st)) { // 스택이 비어있는 경우
    printf("stack underflow!!\n");
  }
  else {
    int val = st->buf[st->top];
    st->top--;
    return val;
  }
}

void push(stack* st, int value)
{
  if(isFull(st)) {
    printf("stack overflow!!\n");
  }
  else {
    // st->buf[++(st->top)] = value;
    st->top++;
    st->buf[st->top] = value; // 포인터를 사용하여 구조체 원소에 접근할 때, 애로우 연산자 사용
    printf("%d\n", value);
  }
}
// isFull, isEmpty 함수 만들어보기~!