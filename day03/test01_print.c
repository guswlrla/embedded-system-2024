// date : 2024-03-13
// desc : 출력

#include <stdio.h>

void main()
{
  printf("%d\n", 24); // 정수출력
  printf("%d\n", 0123); // 0은 8진수를 나타냄
  printf("%d\n", 0xACC); // 0x는 16진수를 나타냄
  printf("%f\n", 3.14);

  printf("int : %d\n", sizeof(int)); // sizeof : 자료형의 크기를 구함
  printf("float : %d\n", sizeof(float));
  printf("double : %d\n", sizeof(double));

  printf("%c\n", 'A');
  printf("%d\n", 'A'); // 65
  printf("%c\n", 97); // a

  printf("%s\n", "RaspberryPi OS!\n");
}

/* 정리
  1. 자료형의 크기
    int : 4byte
    float : 4byte
    double : 8byte
    
  2. c언어 출력타입
    %d : 10진수(정수형)
    %f : 실수형
    %o : 8진수
    %x : 16진수
    %c : 문자 1개
    %s : 문자열
*/