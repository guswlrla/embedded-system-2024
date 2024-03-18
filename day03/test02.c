// date : 2024-03-13
// desc : 문자열 출력

#include <stdio.h>
#define BUFSIZE 14 // null 문자가 들어갈 공간을 줘야함(+1)

void main()
{
  char str[BUFSIZE] = "RaspberryPi!!";
  printf("%s\n", str);

  for(int i = 0; i < BUFSIZE; i++)
  {
    printf("%c", str[i]);
  }
  printf("\n");
}