#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			printf(" ");
		}
		for (j = 6; j < 19-2*(9-i); j++)
		{		
			printf("*");
		}
		printf("\n");
	}
}