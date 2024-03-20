// date : 2024-03-20
// desc : 이진탐색(반으로 나눠서 찾음)

#include <stdio.h>

void binary(int *ary, int size)
{
    while(first <= last) {
        middle = (first + last) / 2;
        if(target == ary[middle]) {
            printf("%d\n", ary[middle]);
        }
        else {
            if(target > ary[middle]) first = middle + 1;
            else last = middle - 1;
        }
    }
}

int main()
{
    int ary[] = {2, 4, 6, 8, 10, 12}; // 이진탐색은 정렬이 되어있어야 함
    int size = sizeof(ary) / sizeof(int);
    int first = 0;
    int last = 0;
    int middle = 0;

    /*
    while(first <= last) {
        middle = (first + last) / 2;
        if(target == ary[middle]) {
            printf("%d\n", ary[middle]);
        }
        else {
            if(target > ary[middle]) first = middle + 1;
            else last = middle - 1;
        }
    }
    */
}

// date : 2024-03-20
 2 // desc : 이진탐색(반으로 나눠서 찾음)
 3
 4 #include <stdio.h>
 5
 6 int binary(int *ary, int size, int target)
 7 {
 8   int first = 0;
 9   int middle = 0;
10   int last = size;
11
12   while(first <= last) {
13   middle = (first + last) / 2;
14   if(target == ary[middle]) {
15     printf("%d\n", ary[middle]);
16   }
17   else {
18     if(target > ary[middle]) first = middle + 1;
19     else last = middle -1;
20     }
21   }
22   return -1;
23 }
24
25 int main()
26 {
27     int ary[] = {2, 4, 6, 8, 10, 12};
28     int size = sizeof(ary) / sizeof(int);
29     int target = 2;
30
31     /*
32     while(first <= last) {
33         middle = (first + last) / 2;
34         if(target == ary[middle]) {
35             printf("%d\n", ary[middle]);
36         }
37         else {
38             if(target > ary[middle]) first = middle + 1;
39             else last = middle - 1;
40         }
41     }
42     */
43
44     int result = binary(ary, size, target);
45     if(result == -1) printf("찾는 원소가 없습니다.\n");
46     else {
47       printf("찾은 인덱스 : %d\n", result);
48     }
49 }
