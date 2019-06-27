#include <stdio.h>
#include <stdlib.h>
//指针得本质 存地址 间接引用
int main()
{
	int i = 3;
	int *p = &i;
	printf("i=%d\n", i);//直接引用
	printf("*p=%d\n", *p);//间接引用
	system("pause");
	 
}