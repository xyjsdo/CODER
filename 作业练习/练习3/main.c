#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	for (i = 0; i < 9; i++)
	{	
		for (j = 0; j < abs(4 - i); j++)
		{
			printf(" ");
		}

		for (j = 0; j < 9 - 2 * abs(4 - i); j++)
		{
			if (j == 0 || j == 8 - 2 * abs(4 - i))
			{
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}