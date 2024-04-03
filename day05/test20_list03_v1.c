
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
  int data;
  struct NODE* next;
}node;

typedef struct
{
  node* head;
}headNode;

headNode* createHeadNode(void)
{
  headNode* newhead = (headNode*)malloc(sizeof(headNode)); // 헤드노드 생성
  if(newhead != NULL) newhead->head = NULL;
  return newhead;
}

void pre_addNode(headNode* pnode, int _data) // 전위삽입
{
  node* newNode = (node*)malloc(sizeof(node)); // 노드생성
  // if(newNode == NULL) return -1; // 역참조 첫번째 방법
  if(newNode != NULL) // 역참조 두번째 방법
  {
    newNode->data = _data;
    newNode->next = pnode->head;
    pnode->head = newNode;
  }
}


void post_addNode(headNode* pnode, int _data) // 후위삽입
{
  node* newNode = (node*)malloc(sizeof(node));
  newNode-> data = _data; // 새로운 노드에 데이터 값 넣음
  newNode->next = NULL; // 새로운 노드의 next를 NULL로 설정

    if(pnode->head == NULL)// 헤더의 next가 NULL일때, 가리키지 않는 상태(첫번째 노드를 연결)
  {
    pnode->head = newNode; // 새로운 노드 생성
  }
  else  // 첫번째 노드 연결 이후
  {
    node* curr = pnode->head; //curr은 첫번째 노드
    while(curr->next != NULL) // 첫번째 노드가 다른 노드를 가리키고 있을 때
    {
      curr = curr->next; // curr next를 curr에 대입, 다음 노드를 curr로 바꿈
    }
    curr->next = newNode; // 새로운 노드에 연결
  }
}

void showNode(headNode* pnode) // 출력함수
{
  node* curr = pnode->head; // curr가 현재 노드를 가리킴
  while(curr != NULL) // 값이 다 출력되도록
  {
    printf("%d\n", curr->data); // 현재 데이터 출력
    curr = curr->next; // curr가 다음 노드를 가리키도록 함
  }
}

void allFreeNode(headNode* pnode) // 전체 메모리 해제
{
  node* curr = pnode->head;
  node* temp;
  while(curr != NULL)
  {
    temp = curr->next;
    free(curr);
    curr = temp;
  }
  free(pnode);
}

node* searchNode(headNode* pnode, int _data) // 노드 검색
{
  node* curr = pnode->head;
  while(curr != NULL)
  {
    if(curr->data == _data)
    {
      return curr;
    }
    curr = curr->next;
  }
  return NULL;
}

void main()
{
  headNode* newhead = createHeadNode();

  pre_addNode(newhead, 10); // 첫번째 노드로 삽입
  pre_addNode(newhead, 20);
  pre_addNode(newhead, 30);
  pre_addNode(newhead, 40);
  pre_addNode(newhead, 50);

  post_addNode(newhead, 10);
  post_addNode(newhead, 20);
  post_addNode(newhead, 30);
  post_addNode(newhead, 40);
  post_addNode(newhead, 50);

  /*
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
*/

  showNode(newhead); // 출력함수 호출
  allFreeNode(newhead);
  printf("메모리 삭제\n");
}