#include <stdio.h>

void main()
{
  printf("%d\n", 24); // 정수출력
  printf("%d\n", 0123); // 0은 8진수를 나타냄
  printf("%d\n", 0xACC); // 0x는 16진수를 나타냄
  printf("%f\n", 3.14);

  printf("int : %d\n", sizeof(int));
  printf("float : %d\n", sizeof(float));
  printf("double : %d\n", sizeof(double));

  printf("%c\n", 'A');
  printf("%d\n", 'A'); // 65
  printf("%c\n", 97); // a

  printf("%s\n", "RaspberryPi OS!\n");
}
