#include <stdio.h>
#include <stdlib.h>
#include "Deque.h"


void DequeInit(Deque* pdq)
{
	pdq->front = NULL;
	pdq->rear = NULL;
}
int DQIsEmpty(Deque* pdq)
{
	if (pdq->front == NULL)
		return TRUE;
	else
		return FALSE;
}

void DQAddFirst(Deque* pdq, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode) return;
	newNode->data = data;
	newNode->next = NULL;

	if (DQIsEmpty(pdq))
	{
		pdq->front = newNode;
		pdq->rear = newNode;
		newNode->prev = NULL;
	}
	else
	{
		newNode->prev = pdq->front;
		pdq->front->next = newNode;
		pdq->front = newNode;
	}
}
void DQAddLast(Deque* pdq, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode) return;
	newNode->data = data;
	newNode->prev = NULL;

	if (DQIsEmpty(pdq))
	{
		pdq->front = newNode;
		pdq->rear = newNode;
		newNode->next = NULL;
	}
	else
	{
		pdq->rear->prev = newNode;
		newNode->next = pdq->rear;
		pdq->rear = newNode;
	}
}

Data DQRemoveFirst(Deque* pdq)
{
	if (DQIsEmpty(pdq))
		exit(-1);

	Node* rnode = pdq->front;
	Data rdata = rnode->data;

	if (pdq->front == pdq->rear)
	{
		pdq->front = NULL;
	}
	else
	{
		pdq->front->prev->next = NULL;
		pdq->front = pdq->front->prev;
	}
	free(rnode);
	return rdata;
}
Data DQRemoveLast(Deque* pdq)
{
	if (DQIsEmpty(pdq))
		exit(-1);

	Node* rnode = pdq->rear;
	Data rdata = rnode->data;

	if (pdq->front == pdq->rear)
	{
		pdq->front = NULL;
	}
	else
	{
		pdq->rear->next->prev = NULL;
		pdq->rear = pdq->rear->next;
	}
	free(rnode);
	return rdata;
}

Data DQGetFirst(Deque* pdq)
{
	if (DQIsEmpty(pdq))
		exit(-1);
	return pdq->front->data;
}
Data DQGetLast(Deque* pdq)
{
	if (DQIsEmpty(pdq))
		exit(-1);
	return pdq->rear->data;
}
