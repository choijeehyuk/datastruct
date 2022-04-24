#include <stdio.h>
#include "BinaryTree.h"
#include "ExpressionTree.h"

void PrintBTD(BTData data)
{
	printf("%d ", data);
}

int main()
{
	char exp[] = "325+*4*23*+";
	BTreeNode* eTree = MakeExpTree(exp);

	printf("Preorder expression : ");
	ShowPrefixTypeExp(eTree);
	printf("\n");

	printf("Inorder expression : ");
	ShowInfixTypeExp(eTree);
	printf("\n");

	printf("Postorder expression : ");
	ShowPostfixTypeExp(eTree);
	printf("\n");

	printf("expression result : %d", EvaluateExpTree(eTree));
	
	return 0;
}
