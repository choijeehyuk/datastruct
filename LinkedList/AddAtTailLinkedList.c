#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node* Next;
} Node;

//int AddAtTailLinkedList(void)
int main5(void)
{
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	while (1)
	{
		printf("input a nature number: ");
		int re = scanf("%d", &readData);
		if (readData < 0)
			break;

		newNode = (Node*)malloc(sizeof(Node));
		if (newNode)
		{
			newNode->data = readData;
			newNode->Next = NULL;
		}

		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			newNode->Next = head;
			head = newNode;
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
		cur = head;
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
		Node* delNode = head;
		Node* delNextNode = head->Next;

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
