#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = -1;
	int j;
	j = i++ > -1;//ֱ�ӷֳ������֣� j=i>-1;i=i+1;
	printf("i=%d,j=%d\n", i, j);
	system("pause");
}