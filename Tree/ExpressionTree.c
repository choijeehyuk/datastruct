#include "ExpressionTree.h"
#include "BinaryTree.h"
#include "ListBaseStack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

BTreeNode* MakeExpTree(char exp[])
{
	char tok;

	Stack stack;
	StackInit(&stack);

	BTreeNode* pnode;

	for (int i = 0; i < strlen(exp); ++i)
	{
		pnode = MakeBTreeNode();
		tok = exp[i];

		if (isdigit(tok))
		{
			SetData(pnode, tok - '0');
		}
		else if (tok == '+' || tok == '-' || tok == '*' || tok == '/')
		{
			MakeRightSubTree(pnode, SPop(&stack));
			MakeLeftSubTree(pnode, SPop(&stack));
			SetData(pnode, tok);
		}
		else
		{
			exit(-1);
		}

		SPush(&stack, pnode);
	}
	return SPop(&stack);
}

int EvaluateExpTree(BTreeNode* bt)
{
	int op1, op2;

	if (bt->left == NULL && bt->right == NULL)
	{
		return GetData(bt);
	}

	op1 = EvaluateExpTree(GetLeftSubTree(bt));
	op2 = EvaluateExpTree(GetRightSubTree(bt));

	switch (GetData(bt))
	{
	case '+':
		return op1 + op2;
	case '-':
		return op1 - op2;
	case '*':
		return op1 * op2;
	case '/':
		return op1 / op2;
	default:
		exit(-1);
	}
}

void ShowNodeData(BTData data)
{
	if (data >= 0 && data <= 9)
	{
		printf("%d ", data);
	}
	else
	{
		printf("%c ", data);
	}
}

void ShowPrefixTypeExp(BTreeNode* bt)
{
	PreorderTraverse(bt, ShowNodeData);
}
void ShowInfixTypeExp(BTreeNode* bt)
{
	InorderTraverse(bt, ShowNodeData);
}
void ShowPostfixTypeExp(BTreeNode* bt)
{
	PostorderTraverse(bt, ShowNodeData);
}