#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "InfixToPostfix.h"
#include "PostCalculator.h"
#include <string.h>

int main()
{
	char exp1[] = "1+2*3";
	char exp2[] = "(1+2)*3";
	char exp3[] = "((1-2)+3)*(5-2)";

	int cp1 = EvalInfixExp(exp1);
	int cp2 = EvalInfixExp(exp2);
	int cp3 = EvalInfixExp(exp3);

	ConvToRPNExp(exp1);
	ConvToRPNExp(exp2);
	ConvToRPNExp(exp3);

	printf("%s \n", exp1);
	printf("%s \n", exp2);
	printf("%s \n", exp3);


	int r1 = EvalRPNExp(exp1);
	int r2 = EvalRPNExp(exp2);
	int r3 = EvalRPNExp(exp3);
	
	printf("%d == %d\n", cp1, r1);
	printf("%d == %d\n", cp2, r2);
	printf("%d == %d\n", cp3, r3);

	return 0;
}

