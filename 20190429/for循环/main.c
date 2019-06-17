#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, total;
	for (i = 1,total = 0; i <= 100;i++)
	{
		total = total + i;
	}
	printf("total=%d\n", total);
	system("pause");
}