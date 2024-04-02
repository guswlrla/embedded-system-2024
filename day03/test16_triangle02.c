// date : 2024-03-13
// desc : 피라미드 찍기

#include <stdio.h>

void printSpaces(int numSpaces) {
    for (int i = 0; i < numSpaces; i++) { // numSpaces만큼 반복
        printf(" "); 
    }
}

void printStars(int numStars) {
    for (int i = 0; i < numStars; i++) { // numStars만큼 반복
        printf("*"); // 별표 출력
    }
    printf("\n"); 
}

void printPyramid(int height) {
    for (int i = 1; i <= height; i++) { // 피라미드의 높이만큼 반복
        printSpaces(height - i); // 공백 출력
        printStars(2 * i - 1); // 별표 출력
    }
}

void main() {
    int height; // 피라미드의 높이변수

    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    if (height <= 0) {
        printf("Invalid height.\n");
        return;
    }

    printf("Pyramid with height %d:\n", height);
    printPyramid(height);
}

