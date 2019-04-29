#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	int ret;

	while ((ret=scanf("%c", &c)) != EOF)
	{
		printf("%c", c);
	}
	system("pause");
}