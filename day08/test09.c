// date : 2024-03-20
// desc :

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char data[30] = "나는 김현지, 24살\n";
    char copydata[100];

    FILE* fp;
    fp = fopen("hyeonji.txt","w");
    if(fp == NULL) {
        fprintf(stderr, "ERROR");
        exit(1);
    }
    fprintf(fp, "%s", data);
    printf("%s", data);
    fclose(fp);

    fp = fopen("hyeonji.txt","r");
    if(fp == NULL) {
        fprintf(stderr, "ERROR");
    exit(1);
    }
    fscanf(fp, "%s",copydata);
    fclose(fp);

    FILE* cpfp;
    cpfp = fopen("hyeonji_copy.txt", "w");
    if(cpfp == NULL) {
        fprintf(stderr, "ERROR");
    exit(1);
    }
    fprintf(cpfp, "%s", copydata);
    fclose(cpfp);
}
