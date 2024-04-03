
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
  int data;
  struct NODE* next;
}node;

headNode* creatHeadNode(void)
{
  node* newNode = (node*)malloc(sizeof(node));
  newNode->next = NULL;

}

void pre_addNode(node* pnode, int _data) // 전위삽입
{
  node* newNode = (node*)malloc(sizeof(node)); // 노드생성
  newNode-> data = _data;
  newNode->next = pnode->next;
  pnode->next = newNode;
}

void post_addNode(node* pnode, int _data) // 후위삽입
{
  node* newNode = (node*)malloc(sizeof(node));
  newNode-> data = _data; // 새로운 노드에 데이터 값 넣음
  newNode->next = NULL; // 새로운 노드의 next를 NULL로 설정

  if(pnode->next == NULL)// 헤더의 next가 NULL일때, 가리키지 않는 상태(첫번째 노드를 연결)
  {
    pnode->next = newNode; // 새로운 노드 생성
  }
  else  // 첫번째 노드 연결 이후
  {
    node* curr = pnode->next; //curr은 첫번째 노드
    while(curr->next != NULL) // 첫번째 노드가 다른 노드를 가리키고 있을 때
    {
      curr = curr->next; // curr next를 curr에 대입, 다음 노드를 curr로 바꿈
    }
    curr->next = newNode; // 새로운 노드에 연결
  }
}

void showNode(node* pnode) // 출력함수
{
  node* curr = pnode->next; // curr가 현재 노드를 가리킴
  while(curr != NULL) // 값이 다 출력되도록
  {
    printf("%d", curr->data); // 현재 데이터 출력
    curr = curr->next; // curr가 다음 노드를 가리키도록 함
  }
}

void allFreeNode(node* pnode) // 전체 메모리 해제
{
  node* curr = pnode->next;
  while(curr != NULL)
  {
    free(curr);
    curr = curr->next;
  }
}

void main()
{
  node* head = (node*)malloc(sizeof(node)); // 헤드 노드 생성
  head->next = NULL;  // 헤드 노드의 next 포인터를  NULL로 초기화

  head->data = 0;

  pre_addNode(head, 10); // 첫번째 노드로 삽입
  pre_addNode(head, 20);
  pre_addNode(head, 30);
  pre_addNode(head, 40);
  pre_addNode(head, 50);

  node* curr = head->next; // curr을 첫번째 노드로 설정
  while(curr != NULL) // curr이 NULL이 아닐 때까지
  {
    printf("%d\n", curr->data);
    curr = curr->next; // curr을 다음 노드로 이동
  }

  // 노드 삭제
  curr = head->next;
  while(curr != NULL)
  {
    head->next = curr->next;
    free(curr); // 노드 메모리 해제
    curr = head->next;
  }
  printf("%d, %d\n", head->next, curr);
  free(curr);

  showNode(head); // 출력함수 호출

  free(head);
}

// 수정
