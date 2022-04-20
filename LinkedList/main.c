#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

int WhoIsPrecede(int d1, int d2)
{
	if (d1 < d2)
	{
		return 0;
	}
	return 1;
}

int main2(void)
{
	//AddAtTailLinkedList();
	//AddDummyNode(); 
	List list;
	int data;
	ListInit(&list);
	
	SetSortRule(&list, WhoIsPrecede);

	LInsert(&list, 44);
	LInsert(&list, 11);
	LInsert(&list, 11);
	LInsert(&list, 55);
	LInsert(&list, 22);
	LInsert(&list, 22);
	LInsert(&list, 33);


	printf("current item count : %d\n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
		{
			printf("%d ", data);
		}
	}

	printf("\n\n");

	if (LFirst(&list, &data))
	{
		if (data == 22)
		{
			LRemove(&list);
		}
		while (LNext(&list, &data))
		{
			if (data == 22)
			{
				LRemove(&list);
			}
		}
	}

	printf("current item count : %d\n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);
		while (LNext(&list, &data))
		{
			printf("%d ", data);
		}
	}
	printf("\n\n");

	return 0;
}
