 // date : 2024-03-20
 // desc : 정렬
 
#include <stdio.h>
 
void aryAsc(int ary[], int length) // void aryAsc(int *ary, int length)
{
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length; j++) {
            if(ary[i] < ary[j]) {
                int temp = ary[i]; // 배열 안의 요소를 임의로 저장
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
}

void main()
{
    int ary[] = {9, 4, 8, 15, 3, 7, 2, 1};
    int length = sizeof(ary)/sizeof(int); // 배열의 개수 구하기
    /* 오름차순으로 정렬해보시오.
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length; j++) {
            if(ary[i] < ary[j]) {
            int temp = ary[i];
            ary[i] = ary[j];
            ary[j] = temp;
            }
        }
    }
    */
    printf("오름차순 정렬 : ");
    aryAsc(ary, length);
    for(int i = 0; i < length; i++) {
        printf("%d ", ary[i]);
    }
    printf("\n");
}
