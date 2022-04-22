//#include <stdio.h>
//#include <stdlib.h>
//#include "CircularQueue.h"
//
//int NextPostIdx(int pos)
//{
//	if (pos == QUE_LEN - 1)
//		return 0;
//	else
//		return pos + 1;
//}
//
//void QueueInit(Queue* pq)
//{
//	pq->front = 0;
//	pq->rear = 0;
//}
//int QIsEmpty(Queue* pq)
//{
//	if (pq->front == pq->rear)
//		return TRUE;
//	else
//		return FALSE;
//}
//
//void Enqueue(Queue* pq, Data data)
//{
//	if (NextPostIdx(pq->rear) == pq->front)
//	{
//		printf("Full Queue");
//		return;
//	}
//
//	pq->rear = NextPostIdx(pq->rear);
//	pq->array[pq->rear] = data;
//}
//Data Dequeue(Queue* pq)
//{
//	Data rdata;
//	if (QIsEmpty(pq))
//	{
//		printf("Empty Queue");
//		exit(-1);
//	}
//	
//	pq->front = NextPostIdx(pq->front);
//	rdata = pq->array[pq->front];
//	return rdata;
//}
//Data QPeek(Queue* pq)
//{
//	if (QIsEmpty(pq))
//	{
//		printf("Empty Queue");
//		exit(-1);
//	}
//	return pq->array[NextPostIdx(pq->front)];
//}