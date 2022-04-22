#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListBaseStack.h"

int EvalRPNExp(char exp[])
{
	Stack stack;
	StackInit(&stack);

	char tok;
	int pop1, pop2;
	for (int i = 0; i < strlen(exp); ++i)
	{
		tok = exp[i];
		switch (tok)
		{
		case '+':
			pop1 = SPop(&stack);
			pop2 = SPop(&stack);
			SPush(&stack, pop2 + pop1);
			break;
		case '-':
			pop1 = SPop(&stack);
			pop2 = SPop(&stack);
			SPush(&stack, pop2 - pop1);
			break;
		case '*':
			pop1 = SPop(&stack);
			pop2 = SPop(&stack);
			SPush(&stack, pop2 * pop1);
			break;
		case '/':
			pop1 = SPop(&stack);
			pop2 = SPop(&stack);
			SPush(&stack, pop2 / pop1);
			break;
		default:
			SPush(&stack, tok - 48);
		}
	}
	return SPop(&stack);
}