// date : 2024-03-13
// desc : 계산기

#include <stdio.h>

void calculate(int a, int b, char operator) {
    switch(operator) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if(b != 0) {
                printf("%d / %d = %d\n", a, b, a / b);
            } else {
                printf("0으로 나눌 수 없습니다.\n");
            }
            break;
        default:
            printf("지원하지 않는 연산자입니다.\n");
    }
}

void main() {
    int num1, num2;
    char operator;

    printf("계산할 첫 번째 정수를 입력하세요: ");
    scanf("%d", &num1);

    printf("계산할 두 번째 정수를 입력하세요: ");
    scanf("%d", &num2);

    printf("수행할 연산을 입력하세요 (+, -, *, /): ");
    scanf("%c", &operator);
    operator = getchar();

    calculate(num1, num2, operator);
}

