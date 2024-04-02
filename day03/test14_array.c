// date : 2024-03-13
// desc : 배열 입력으로 받기

#include <stdio.h>
#define MAX 20

void main() {
    int arr[MAX], num, i;

    printf("배열크기 입력값 (1~20): ");
    scanf("%d", &num);
    if (num < 1 || num > MAX) { 
        printf("범위 초과\n");
        return;
    }

    printf("배열 사이즈 %d 입력:\n", num);
    for (i = 0; i < num; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("배열의 역순:\n");
    for (i = num - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}