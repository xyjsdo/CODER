#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1;
	int total = 0;
	while (i <= 100)
	{
		total = total + i;
		i++;//ʹ���ʽ����������
	}
	printf("total=%d\n", total);
	system("pause");
}