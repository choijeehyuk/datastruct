#pragma once

#define TRUE		1
#define FALSE		0

#define QUE_LEN		100
typedef int Data;

typedef struct _cQueue
{
	Data array[QUE_LEN];
	int front;
	int rear;
}CQueue;

typedef CQueue Queue;

void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);

void Inqueue(Queue* pq, Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);

