#include <stdio.h>
#include <stdlib.h>

#define N 5
int main()
{
	int a[N] = { 1,2,3,4,5 };
	int *p;
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
	system("pause");
}