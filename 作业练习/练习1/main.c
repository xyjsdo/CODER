#include <stdio.h>
#include <stdlib.h>
//¥Ú”°æ≈æ≈≥À∑®±Ì
int main()
{
	int i;
	int j;

	for (i = 1; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			printf("%d*%d=%d\t", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
}