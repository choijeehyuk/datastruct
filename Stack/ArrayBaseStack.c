//#include <stdio.h>
//#include <stdlib.h>
//#include "ArrayBaseStack.h"
//
//void StackInit(Stack* pstack)
//{
//	pstack->topIndex = -1;
//}
//
//int SIsEmpty(Stack* pstack)
//{
//	if (pstack->topIndex == -1)
//		return TRUE;
//	return FALSE;
//}
//
//void SPush(Stack* pstack, Data data)
//{
//	if (pstack->topIndex > 99) return;
//	
//	pstack->stackArr[++(pstack->topIndex)] = data;
//}
//
//Data SPop(Stack* pstack)
//{
//	if (pstack->topIndex < 0) return;
//	return pstack->stackArr[(pstack->topIndex)--];
//}
//Data SPeek(Stack* pstack)
//{
//	return pstack->stackArr[(pstack->topIndex)];
//}