#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	char a;
	int i = 0, sum = 0;
	char c[32] = {0};
	char lease[20];
CHECK:
		printf("请输入二进制数>>");
		while (scanf_s("%c", &a) != EOF)
		{
			if (a > '1' || a < '0')
			{
				if (a != '\n')
				{
					gets(lease);
					printf("请输入正确二进制数\n");
					goto CHECK;
				}
			}
			if (a == '\n')
			{
				for (i; i > 0; i--) {
					sum += (c[i-1] - '0') * ((int)pow(2, i - 1));
				}
				printf("十进制数为%d\n", sum);
				i = 0;
				sum = 0;
				goto CHECK;
			}
			else
			{
				c[i] = a;
				//printf("%c\n", a);
				i++;
			}
		}
	system("pause");
}