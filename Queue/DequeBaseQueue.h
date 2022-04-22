#pragma once
#include "Deque.h"

typedef Deque Queue;

void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);
void Enqueue(Queue* pq);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);
