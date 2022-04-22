#include "InfixToPostfix.h"
#include "PostCalculator.h"
#include <string.h>
#include <stdlib.h>


int EvalInfixExp(char exp[])
{
	int len = strlen(exp);
	int ret;
	char* expcpy = (char*)malloc(sizeof(char) * len + 1);
	strcpy_s(expcpy, len + 1, exp);

	ConvToRPNExp(expcpy);
	ret = EvalRPNExp(expcpy);

	free(expcpy);

	return ret;
}