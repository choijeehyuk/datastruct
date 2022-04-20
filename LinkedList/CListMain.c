#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"

int main(void)
{
	List list;
	Data data;
	ListInit(&list);

	LInsert(&list, 2);
	LFirst(&list, &data);
	LRemove(&list);

	LInsert(&list, 3);
	LInsert(&list, 4);
	LInsert(&list, 5);
	LInsertFront(&list, 2);
	LInsertFront(&list, 1);

	printf("current item count : %d\n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		for (int i = 0; i < LCount(&list) * 3 - 1; ++i)
		{
			LNext(&list, &data);
			printf("%d ", data);
		}
	}

	printf("\n\n");

	int nodeNum = LCount(&list);

	if (nodeNum != 0)
	{
		LFirst(&list, &data);
		if (data % 2 == 0)
			LRemove(&list);

		for (int i = 0; i < nodeNum - 1; ++i)
		{
			LNext(&list, &data);
			if (data % 2 == 0)
				LRemove(&list);
		}

	}

	printf("current item count : %d\n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		for (int i = 0; i < LCount(&list) - 1; ++i)
		{
			if (LNext(&list, &data))
				printf("%d ", data);
		}
	}

	printf("\n\n");

	return 0;
}
