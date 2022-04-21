#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
	Data data;
	struct _node* next;
	struct _node* prev;
} Node;

typedef struct _linkedList
{
	Node* head;
	Node* tail;
	Node* cur;
	int numOfData;
} DBDLinkedList;

typedef DBDLinkedList List;

void ListInit(List* plist);
void LInsert(List* plist, Data data); // add on tail

int LFirst(List* plist, Data* pdata);
int LNext(List* plist, Data* pdata);
int LPrevious(List* plist, Data* pdata);

Data LRemove(List* plist); // directly implement
int LCount(List* plist);


#endif