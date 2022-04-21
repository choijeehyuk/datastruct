#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLinkedList.h"

Data confirmPartyPost(List* partyPostOrder, char* name, int num)
{
	Data data;

	if (LFirst(partyPostOrder, &data))
	{
		if (strcmp(name, data.name) == 0)
		{
			for (int i = 0; i < num; ++i)
			{
				LNext(partyPostOrder, &data);
			}
			return data;
		}
		else
		{
			while (LNext(partyPostOrder, &data))
			{
				if (strcmp(name, data.name) == 0)
				{
					for (int i = 0; i < num; ++i)
					{
						LNext(partyPostOrder, &data);
					}
					return data;
				}
			}
		}
	}
	
}

int main(void)
{
	List partyPostOrder;
	Data data;
	ListInit(&partyPostOrder);

	Data* employee1 = (Data*)malloc(sizeof(Data));
	employee1->num = 1;
	employee1->name = "sungsu";

	Data* employee2 = (Data*)malloc(sizeof(Data));
	employee2->num = 2;
	employee2->name = "june";

	Data* employee3 = (Data*)malloc(sizeof(Data));
	employee3->num = 3;
	employee3->name = "jee";

	Data* employee4 = (Data*)malloc(sizeof(Data));
	employee4->num = 4;
	employee4->name = "su";

	LInsert(&partyPostOrder, *employee1);
	LInsert(&partyPostOrder, *employee2);
	LInsert(&partyPostOrder, *employee3);
	LInsert(&partyPostOrder, *employee4);

	Data result = confirmPartyPost(&partyPostOrder, "su", 1);

	return 0;
}

