#include <stdio.h>

int sumf();
int minusf();

void main()
{
  int 10, 20;
  sumf(10, 20);
  minusf(20, 10);
  printf("더한 값은%d 이고, 뺀 값은%d 입니다.\n", sumf(), minusf()); // 출력을 메인함수에서 함
}

int sumf(int a, int b)
{
  return a+b;
}

int minus(int a, int b)
{
  return a-b;
}
