#include "UsefulHeap.h"

void HeapInit(Heap* ph, PriorityComp pc)
{
	ph->numOfData = 0;
	ph->comp = pc;
}

int HIsEmpty(Heap* ph)
{
	if (ph->numOfData == 0)
		return TRUE;
	else
		return FALSE;
}

int GetParentIDX(int idx)
{
	return idx / 2;
}

int GetLChildIDX(int idx)
{
	return idx * 2;
}

int GetRChildIDX(int idx)
{
	return idx * 2 + 1;
}

int GetHiPriChildIDX(Heap* ph, int idx)
{
	if (GetLChildIDX(idx) > ph->numOfData)
		return 0;
	else if (GetLChildIDX(idx) == ph->numOfData)
		return GetLChildIDX(idx);
	else
	{
		if (ph->comp(ph->heapArr[GetLChildIDX(idx)], ph->heapArr[GetRChildIDX(idx)]) < 0)
		{
			return GetRChildIDX(idx);
		}
		else
			return GetLChildIDX(idx);
	}
}

void HInsert(Heap* ph, HData data)
{
	int idx = ph->numOfData + 1;

	while (idx != 1)
	{
		if (ph->comp(data, ph->heapArr[GetParentIDX(idx)]) <= 0)
		{
			break;
		}

		ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
		idx = GetParentIDX(idx);
	}
	ph->heapArr[idx] = data;
	ph->numOfData++;
}

HData HDelete(Heap* ph)
{
	HData retData = ph->heapArr[1];
	HData lastElem = ph->heapArr[ph->numOfData];

	int pidx = 1;
	int idx;

	while (idx = GetHiPriChildIDX(ph, pidx))
	{
		if (ph->comp(lastElem, ph->heapArr[idx]) >= 0)
		{
			break;
		}

		ph->heapArr[pidx] = ph->heapArr[idx];
		pidx = idx;
	}

	ph->heapArr[pidx] = lastElem;
	ph->numOfData--;

	return retData;
}