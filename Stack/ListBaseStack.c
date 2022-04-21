//#include <stdio.h>
//#include <stdlib.h>
//#include "ListBaseStack.h"
//
//void StackInit(Stack* pstack)
//{
//	pstack->head = NULL;
//}
//
//int SIsEmpty(Stack* pstack)
//{
//	if (pstack->head == NULL)
//	{
//		return TRUE;
//	}
//	return FALSE;
//}
//
//void SPush(Stack* pstack, Data data)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	if (!newNode) return;
//	newNode->data = data;
//	
//	newNode->next = pstack->head;
//	pstack->head = newNode;
//}
//
//Data SPop(Stack* pstack)
//{
//	if (SIsEmpty(pstack))
//	{
//		exit(-1);
//	}
//	Node* rnode = pstack->head;
//	Data rdata = rnode->data;
//
//	pstack->head = pstack->head->next;
//	free(rnode);
//
//	return rdata;
//}
//Data SPeek(Stack* pstack)
//{
//	if (SIsEmpty(pstack))
//	{
//		exit(-1);
//	}
//
//	return pstack->head->data;
//}