#include <stdio.h>
#include <stdlib.h>

int main()
{
	//不能够跳转到其他函数 
	int i = 1;
	int total = 0;
label:
	total = total + i;
	i++;
	if (i <= 100)
	{
		goto label;//向上跳转实现循环
	}
	printf("total=%d\n", total);
	system("pause");
}
 