#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	while (scanf("%d",&i)!=EOF)
	{
		if (i > 0)
		{
			printf("%d is bigger than 0.",i);
		}
		else {
			printf("%d is not bigger than 0.", i);
		}
		
	}
	system("pause");
}