// date : 2024-03-13
// desc : 입력

#include <stdio.h>

void main()
{
    char ch;
    int n;

    printf("학번을 입력하세요 : ");
    scanf("%d", &n);

    getchar();

    printf("이름을 입력하세요 :  ");
    scanf("%c", &ch);

    printf("%d, %c\n", n, ch);
}