#include <stdio.h>
#include "PriorityQueue.h"
#include <string.h>

int DataPriorityComp(char* ch1, char* ch2)
{
	return strlen(ch2) - strlen(ch1);
}

int main()
{
	PQueue pq;
	PQueueInit(&pq, DataPriorityComp);

	PEnqueue(&pq, "22");
	PEnqueue(&pq, "55555");
	PEnqueue(&pq, "4444");
	PEnqueue(&pq, "333");


	PEnqueue(&pq, "999999999");
	PEnqueue(&pq, "666666");
	PEnqueue(&pq, "88888888");
	printf("%s \n", PDequeue(&pq));

	while (!PQIsEmpty(&pq))
	{
		printf("%s \n", PDequeue(&pq));
	}

	return 0;
}
