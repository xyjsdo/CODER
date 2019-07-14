#include "func.h"

static int k = 10;//全局变量从定义位置开始到文件末尾有效。
//static 修饰全局变量，只在本文件内有效
int main()
{
	printf("main k=%d\n", k);
	print();
	print();
	print();

	system("pause");
}