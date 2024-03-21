// date : 2024-03-20
// desc : 표준입출력 함수

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char msg[20];
    FILE* fp;
    if((fp = fopen("test.txt", "r")) == NULL) {
        fprintf(stderr, "ERROR");   // 표준 에러는 모니터와 연결
        exit(1);
    }
    fscanf(fp, "%s", msg); // fp파일의 문자열을 msg에 저장
    printf("%s\n", msg);
    
    fclose(fp);
}
