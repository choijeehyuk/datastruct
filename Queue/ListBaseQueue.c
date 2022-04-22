//#include "ListBaseQueue.h"
//#include <stdio.h>
//#include <stdlib.h>
//
//void QueueInit(Queue* pq)
//{
//	pq->front = NULL;
//	pq->rear = NULL;
//}
//int QIsEmpty(Queue* pq)
//{
//	if (pq->front == NULL)
//		return 1;
//	else
//		return 0;
//}
//
//void Enqueue(Queue* pq, Data data)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	if (!newNode) return;
//	newNode->data = data;
//	newNode->next = NULL;
//
//	if (QIsEmpty(pq))
//		pq->front = newNode;
//	else
//		pq->rear->next = newNode;
//	
//	pq->rear = newNode;
//
//}
//Data Dequeue(Queue* pq)
//{
//	Node* rnode = pq->front;
//	Data rdata = rnode->data;
//
//	if (QIsEmpty(pq))
//	{
//		printf("Queue is Empty");
//		exit(-1);
//	}
//	
//	pq->front = pq->front->next;
//	free(rnode);
//	return rdata;
//}
//Data QPeek(Queue* pq)
//{
//	if (QIsEmpty(pq))
//	{
//		printf("Queue is Empty");
//		exit(-1);
//	}
//
//	return pq->front->data;
//}