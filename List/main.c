#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
#include "Point.h"

typedef struct
{
	char name[30];
	char phone[30];
}test;

int main(void)
{
	List list;
	NameCard* p1 = MakeNameCard("sungsu", "01052582661");
	NameCard* p2 = MakeNameCard("juneyoung", "01045344982");
	NameCard* p3 = MakeNameCard("gyoseong", "01030095831");
	NameCard* ppos;

	ListInit(&list);

	LInsert(&list, p1);
	LInsert(&list, p2);
	LInsert(&list, p3);

	if (LFirst(&list, &ppos))
	{
		if (NameCompare(ppos, "sungsu") == 0)
		{
			ShowNameCardInfo(ppos);
		}
		while (LNext(&list, &ppos))
		{
			if (NameCompare(ppos, "sungsu") == 0)
			{
				ShowNameCardInfo(ppos);
			}
		}
	}

	if (LFirst(&list, &ppos))
	{
		if (NameCompare(ppos, "juneyoung") == 0)
		{
			ChangePhoneNum(ppos, "01067572662");
		}
		while (LNext(&list, &ppos))
		{
			if (NameCompare(ppos, "juneyoung") == 0)
			{
				ChangePhoneNum(ppos, "01067572662");
			}
		}
	}

	if (LFirst(&list, &ppos))
	{
		if (NameCompare(ppos, "gyoseong") == 0)
		{
			ppos = LRemove(&list);
			free(ppos);
		}
		while (LNext(&list, &ppos))
		{
			if (NameCompare(ppos, "gyoseong") == 0)
			{
				ppos = LRemove(&list);
				free(ppos);
			}
		}
	}

	if (LFirst(&list, &ppos))
	{
		printf("\n");
		ShowNameCardInfo(ppos);
		while (LNext(&list, &ppos))
		{
			ShowNameCardInfo(ppos);
		}
	}

	return 0;
}