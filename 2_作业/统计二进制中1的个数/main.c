#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	while (scanf_s("%d", &a) != EOF)
	{
		int c;
		int i = 32;
		int con = 0;
		while (i--)
		{
			c = a & 1;
			a = a >> 1;
			if (1 == c)
			{
				con++;
			}
		}

		printf("%d\n", con);
		
	}
	system("pause");
}