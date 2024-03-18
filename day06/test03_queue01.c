// date : 2024-03-18
// desc : 큐

#include <stdio.h>
#define Q_SIZE 10

// 전역선언                                                                                                                                                                                                                queue01.c                                                                                                                                                                                                                                I
int queue[Q_SIZE];
int front = -1;
int rear = -1;

void enqueue(int _data)
{
  if(rear >= Q_SIZE - 1) {
    printf("queue overflow!!\n");
    return;
  }
  queue[++_rear] = _data;
}

int dequeue()
{
  if(front == rear) {
    printf("queue underflow!!\n");
    return -1;
  }
  return queue[++front];
}

int main()
{
  // int rear = -1;
  // int front = -1;
  // int queue[Q_SIZE];

  enqueue(10);
  enqueue(20);
  enqueue(30);

  printf("%d\n", dequeue()); // 10
  printf("%d\n", dequeue()); // 20
}
