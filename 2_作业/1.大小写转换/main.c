#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int c;
	while (c = getchar(), c != EOF)
	{
		if (c >= 97 && c <= 122)
		{
			c = c - 32;
		}
		putchar(c);
	}
	system("pause");
}