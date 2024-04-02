// date : 2024-03-13
// desc : 별 찍기

#include <stdio.h>

void main() {
    // 첫 번째 반복문: 가로로 4개의 별표를 출력하는 사각형
  for(int i = 0; i < 5; i++) {
      for(int j = 0; j < 4; j++) { // 한 줄에 4개의 별을 찍음.
        printf("*");
      }
     printf("\n");
   }
   printf("\n"); 

   // 두 번째 반복문: 피라미드 모양의 별표 출력
   for (int i = 0; i < 5; i++) {
     for (int j = 0; j <= i; j++) {
       printf("*");
     }
     printf("\n");
   }
   printf("\n"); 
 }
