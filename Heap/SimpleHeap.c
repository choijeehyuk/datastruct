//#include "SimpleHeap.h"
//#include <stdio.h>
//#include <stdlib.h>
//
//void HeapInit(Heap* ph)
//{
//	ph->numOfData = 0;
//}
//
//int HIsEmpty(Heap* ph)
//{
//	if (ph->numOfData == 0)
//		return TRUE;
//	else
//		return FALSE;
//}
//
//int GetParentIDX(int idx)
//{
//	return idx / 2;
//}
//
//int GetLChildIDX(int idx)
//{
//	return idx * 2;
//}
//
//int GetRChildIDX(int idx)
//{
//	return idx * 2 + 1;
//}
//
//int GetHiPriChildIDX(Heap* ph, int idx)
//{
//	if (GetLChildIDX(idx) > ph->numOfData)
//	{
//		return 0;
//	}
//	else if (GetLChildIDX(idx) == ph->numOfData)
//	{
//		return GetLChildIDX(idx);
//	}
//	else
//	{
//		if (ph->heapArr[GetLChildIDX(idx)].pr < ph->heapArr[GetRChildIDX(idx)].pr)
//		{
//			return GetLChildIDX(idx);
//		}
//		else
//		{
//			return GetRChildIDX(idx);
//		}
//	}
//}
//
//void HInsert(Heap* ph, HData data, Priority pr)
//{
//	HeapElem elem = { pr, data };
//	int idx = ph->numOfData + 1;
//
//	while (idx != 1)
//	{
//		if (pr >= ph->heapArr[GetParentIDX(idx)].pr)
//		{
//			break;
//		}
//		ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
//		idx = GetParentIDX(idx);
//	}
//
//	ph->heapArr[idx] = elem;
//	ph->numOfData++;
//}
//
//HData HDelete(Heap* ph)
//{
//	HData retData = ph->heapArr[1].data;
//	HeapElem lastElem = ph->heapArr[ph->numOfData];
//
//	int parentIdx = 1;
//	int childIdx;
//
//	while (childIdx = GetHiPriChildIDX(ph, parentIdx))
//	{
//		
//		if (ph->heapArr[childIdx].pr < lastElem.pr)
//		{
//			ph->heapArr[parentIdx] = ph->heapArr[childIdx];
//			parentIdx = childIdx;
//		}
//		else
//			break;
//	}
//
//	ph->heapArr[parentIdx] = lastElem;
//	ph->numOfData--;
//	return retData;
//}