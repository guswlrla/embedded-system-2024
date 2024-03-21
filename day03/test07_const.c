// date : 2024-03-13
// desc : const

#include <stdio.h>

void main()
{
  const int i = 10;
  printf(" i : %d\n", i);
  
  /*
  i = 20;
  printf("i : %d\n", i);
  */
  
  const int* pi = &i; // 포인터 pi 선언, i의 주소 할당
  printf("*pi : %d\n", *pi); // 10
  
  const int* pi2 = &i;
  printf("*pi2 : %d\n", *pi2); //10
}
