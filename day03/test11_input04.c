// date : 2024-03-13
// desc : 입력

#include <stdio.h>

void main()
{
    char ch;
    
    printf("제일 마음에 드는 알파벳은? > ");
    ch = getchar(); // 알파벳을 입력받아 ch 문자변수에 넣음
    printf("%c가 제일 마음에 들어~!!\n", ch);
}

/* 정리
  1. getchar()는 scanf()와 달리 문자 1개를 입력받음
  2. 주소값을 넣지않음
  3. scanf()에서 문자형을 입력받을 때 생기는 문제를 getchar()로 해결
    -> 버퍼를 비워줌 
*/