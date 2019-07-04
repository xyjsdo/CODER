#include <stdio.h>
#include <stdlib.h>
//¥Ú”°Õº–Œ
int main()
{
	int i, j;
	for (i = 1; i < 6; i++)
	{
		for (j = 0; j < 5 - i;j++)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("*");
			printf(" ");
		}
		
		printf("\n");
	}
	for (i = 5; i > 1; i--)
	{
		for (j = 0; j < 6 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i-1; j++)
		{
			printf("*");
			printf(" ");
		}

		printf("\n");
	}

}