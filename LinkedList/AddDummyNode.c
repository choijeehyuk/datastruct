#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node* Next;
} Node;

int AddDummyNode(void)
{
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	head = (Node*)malloc(sizeof(Node));
	tail = head;

	while (1)
	{
		printf("input a nature number: ");
		int re = scanf("%d", &readData);
		if (readData < 0 || re != 1)
			break;

		newNode = (Node*)malloc(sizeof(Node));
		if (newNode)
		{
			newNode->data = readData;
			newNode->Next = NULL;
		}
		if (tail)
		{
			tail->Next = newNode;
			tail = newNode;
		}

	}
	printf("\n");

	printf("all data output\n");

	if (head == NULL)
	{
		printf("empty");
	}
	else
	{
		cur = tail;
		printf("%d ", cur->data);

		while (cur->Next != NULL)
		{
			cur = cur->Next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n");

	if (head == NULL)
	{
		return 0;
	}
	else
	{
		Node* delNode = tail;
		Node* delNextNode = tail->Next;

		printf("%d를 삭제합니다.\n", delNode->data);
		free(delNode);

		while (delNextNode != NULL)
		{
			delNode = delNextNode;
			delNextNode = delNextNode->Next;
			printf("%d를 삭제합니다.\n", delNode->data);
			free(delNode);
		}
	}

	return 0;
}
