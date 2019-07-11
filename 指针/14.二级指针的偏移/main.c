#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//二级指针服务于指针数组的偏移
int main()
{
	char b[5][10] = { "lilei","hanmeimei","manchester","chelsea","primer" };
	//char* p[5];//指针数组的数组名里存的指针类型是二级指针
	char** p;
	char** p2;
	char* tmp;
	p = (char**)malloc(sizeof(char*) * 5);//申请的空间如果需要存储指针值就需要强转成二级指针

	p2 = p;
	int i, j;
	int a[5] = { 3,8,5,2,4 };

	for (i = 0; i < 5; i++)
	{
		p2[i] = b[i];
	}


	for (i = 4; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (strcmp(p2[j], p2[j + 1])>0)
			{
				tmp = p2[j + 1];
				p2[j + 1] = p2[j];
				p2[j] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		puts(p2[i]);
	}
	printf("--------------------------\n");
	for (i = 0; i < 5; i++)
	{
		puts(b[i]);
	}

	system("pause");
	//printf("")
}