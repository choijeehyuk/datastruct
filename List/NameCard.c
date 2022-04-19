#include "NameCard.h"
#include <string.h>
#include <stdlib.h>

NameCard* MakeNameCard(char* name, char* phone)
{
	NameCard* newCard = (NameCard*)malloc(sizeof(NameCard));
	strcpy_s(newCard->name, 30, name);
	strcpy_s(newCard->phone, 30, phone);
	return newCard;
}
void ShowNameCardInfo(NameCard* pcard)
{
	printf("name : %s, phone : %s\n", pcard->name, pcard->phone);
}
int NameCompare(NameCard* pcard, char* name)
{
	if (strcmp(pcard->name, name) == 0) return 0;
	return -1;
}
int ChangePhoneNum(NameCard* pcard, char* phone)
{
	strcpy_s(&pcard->phone, 30, phone);
}