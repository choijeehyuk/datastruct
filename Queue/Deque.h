#pragma once

#define TRUE		1
#define FALSE		0

typedef int Data;

typedef struct _node
{
	Data data;
	struct _node* next;
	struct _node* prev;
} Node;

typedef struct _dq
{
	Node* front;
	Node* rear;
} Deque;

void DequeInit(Deque* pdq);
int DQIsEmpty(Deque* pdq);

void DQAddFirst(Deque* pdq, Data data);
void DQAddLast(Deque* pdq, Data data);

Data DQRemoveFirst(Deque* pdq);
Data DQRemoveLast(Deque* pdq);

Data DQGetFirst(Deque* pdq);
Data DQGetLast(Deque* pdq);