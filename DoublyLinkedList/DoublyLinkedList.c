//#include <stdio.h>
//#include <stdlib.h>
//#include "DoublyLinkedList.h"
//
//void ListInit(List* plist)
//{
//	plist->cur = NULL; // init? does not init? pass on LFirst
//	plist->head = NULL;
//	plist->numOfData = 0;
//}
//
//void LInsert(List* plist, Data data)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	if (newNode)
//	{
//		newNode->data = data;
//		newNode->prev = NULL;
//	}
//
//	newNode->next = plist->head;
//	if (plist->head != NULL)
//		plist->head->prev = newNode;
//	plist->head = newNode;
//	
//	(plist->numOfData)++;
//}
//
//int LFirst(List* plist, Data* pdata)
//{
//	if (plist->head == NULL)
//	{
//		return FALSE;
//	}
//
//	plist->cur = plist->head;
//	*pdata = plist->cur->data;
//	return TRUE;
//
//}
//int LNext(List* plist, Data* pdata)
//{
//	if (plist->cur->next == NULL)
//	{
//		return FALSE;
//	}
//
//	plist->cur = plist->cur->next;
//	*pdata = plist->cur->data;
//	return TRUE;
//}
//int LPrevious(List* plist, Data* pdata)
//{
//	if (plist->cur->prev == NULL)
//	{
//		return FALSE;
//	}
//
//	plist->cur = plist->cur->prev;
//	*pdata = plist->cur->data;
//	return TRUE;
//}
//
//Data LRemove(List* plist)
//{
//	Node* rdata = plist->cur;
//
//	if (plist->cur == plist->head)
//	{
//		plist->head = plist->cur->next;
//		plist->head->prev = NULL;
//	}
//	else if (plist->cur->next == NULL)
//	{
//		plist->cur = plist->cur->prev;
//		plist->cur->next = NULL;
//	}
//	else
//	{
//		plist->cur->prev->next = plist->cur->next;
//		plist->cur->next->prev = plist->cur->prev;
//	}
//
//	free(rdata);
//	(plist->numOfData)--;
//	return rdata->data;
//}
//int LCount(List* plist)
//{
//	return plist->numOfData;
//}