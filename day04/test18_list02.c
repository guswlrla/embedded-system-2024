#include <stdio.h>
#include <stdlib.h> // malloc함수를 쓰기 위함

typedef struct NODE
{
  int data;
  struct NODE* next;
}node;

void main()
{
  node* head = malloc(sizeof(node)); // head노드 : 첫번째 노드를 가리킨다.
  head->next = NULL;

  node* node1 = (node*)malloc(sizeof(node)); // 첫번째 노드
  node1-> data = 10;
  node1->next = NULL;
  head-> next = node1;

  node* node2 =(node*)malloc(sizeof(node)); // 두번째 노드
  node2->data = 20;
  node2->next = NULL;
  node1->next = node2; // 두번째 노드를 연결

  node* node3 = (node*)malloc(sizeof(node)); // 세번째 노드
  node3->data = 30;
  node3->next = NULL;
  node2->next = node3;

  node* curr = head->next; // 첫번째 노드를 가리킴
  while(curr != NULL) // 노드가 몇개 올지 알 수 없기에 while
  {
    printf("%d\n", curr->data);
    curr = curr->next; // 두번째 노드를 가리킴
  }
  free(node1);
  free(node2);
  free(node3);
}
