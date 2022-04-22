//#include <stdio.h>
//#include <stdlib.h>
//#include "CLinkedList.h"
//
//void ListInit(List* plist)
//{
//	plist->numOfData = 0;
//	plist->tail = (Node*)malloc(sizeof(Node));
//	plist->tail->next = plist->tail;
//}
//void LInsert(List* plist, Data data)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node*));
//	newNode->data = data;
//
//	newNode->next = plist->tail->next;
//	plist->tail->next = newNode;
//	plist->numOfData++;
//}
//
//int LFirst(List* plist, Data* pdata)
//{
//	if (plist->tail->next == plist->tail) return FALSE;
//	plist->cur = plist->tail->next;
//	plist->before = plist->tail;
//	*pdata = plist->cur->data;
//}
//int LNext(List* plist, Data* pdata)
//{
//	if (plist->tail->next == plist->tail) return FALSE;
//
//	plist->before = plist->cur;
//	plist->cur = plist->cur->next;
//	*pdata = plist->cur->data;
//
//	if (plist->cur == plist->tail)
//	{
//		return LNext(plist, pdata);
//	}
//
//	return TRUE;
//}
//Data LRemove(List* plist)
//{
//	Node* rnode = plist->cur;
//	Data rdata = rnode->data;
//
//	plist->before->next = plist->cur->next;
//	plist->cur = plist->before;
//	//free(rnode); //-> error code
//	plist->numOfData--;
//	return rdata;
//}
//int LCount(List* plist)
//{
//	return plist->numOfData;
//}