#pragma once

#define TRUE		1
#define FALSE		0

typedef int Data;

typedef struct _node
{
	Data data;
	struct _node* next;
} Node;

typedef struct _LQ
{
	Node* front;
	Node* rear;
} LQueue;

typedef LQueue Queue;

void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);

void Enqueue(Queue* pq, Data data);
Data Dequeue(Queue* oq);
Data QPeek(Queue* pq);