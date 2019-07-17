#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c,d=0;
	while (printf("请输入一个十进制数："),scanf_s("%d", &c) != EOF)
	{	
		
		int i = 0;
		int a[32] = { 0 };
		if (c == 0 || c == 1)
		{
			printf("%d\n", c);
		}
		else {
			while (c != 0)
			{
				d = c % 2;
				c = c / 2;
				a[i++] = d;

			}
		}
		for (i = 31; i >= 0; i--)
		{
			printf("%d", a[i]);
		}
		printf("\n");
	}		
	system("pause");
}