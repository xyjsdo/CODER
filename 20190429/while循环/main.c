#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1;
	int total = 0;
	while (i <= 100)
	{
		total = total + i;
		i++;//使表达式趋近于无穷
	}
	printf("total=%d\n", total);
	system("pause");
}