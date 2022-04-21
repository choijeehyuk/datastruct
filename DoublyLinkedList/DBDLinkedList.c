#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedListWithDummy.h"

void ListInit(List* plist)
{
	(plist->numOfData) = 0;

	plist->head = (Node*)malloc(sizeof(Node));
	plist->tail = (Node*)malloc(sizeof(Node));
	
	plist->head->prev = NULL;
	plist->tail->next = NULL;

	plist->head->next = plist->tail;
	plist->tail->prev = plist->head;

}

void LInsert(List* plist, Data data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (!newNode) return;
	newNode->data = data;

	plist->tail->prev->next = newNode;
	newNode->prev = plist->tail->prev;
	
	newNode->next = plist->tail;
	plist->tail->prev = newNode;

	plist->numOfData++;
}

int LFirst(List* plist, Data* pdata)
{
	if (plist->head->next == plist->tail) return FALSE;

	plist->cur = plist->head->next;
	*pdata = plist->cur->data;

	return TRUE;
}
int LNext(List* plist, Data* pdata)
{
	if (plist->cur->next == plist->tail) return FALSE;

	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;

	return TRUE;
}
int LPrevious(List* plist, Data* pdata)
{
	if (plist->cur->prev == plist->head) return FALSE;

	plist->cur = plist->cur->prev;
	*pdata = plist->cur->data;

	return TRUE;
}

Data LRemove(List* plist)
{
	Node* rnode = plist->cur;
	Data rdata = rnode->data;

	plist->cur->prev->next = plist->cur->next;
	plist->cur->next->prev = plist->cur->prev;

	plist->cur = plist->cur->prev;

	free(rnode);
	
	return rdata;
}
int LCount(List* plist)
{
	return plist->numOfData;
}