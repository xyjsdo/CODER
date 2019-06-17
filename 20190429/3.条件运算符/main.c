#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i, j, k;
	int ret;
	while (scanf("%d%d%d", &i,&j,&k)!=EOF)
	{
		ret = (i > j ? i : j) > k ? (i > j ? i : j) : k; //i 和 j中较大的值
		printf("ret=%d", ret);
	}
}