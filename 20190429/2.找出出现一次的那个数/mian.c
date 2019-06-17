#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
	int a[N] = { 4, 5, 7, 4, 5 };
	int results = 0;
	int i;
	for (i = 0; i < N; i++)
	{
		results = results ^ a[i];
	}
	printf("results=%d\n", results);
	system("pause");
}