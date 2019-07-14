#include "func.h"

int k;//扩展k在本文件中的作用域
//static 修饰函数，该函数只在本文件中有效
void print()
{
	static int i = 0;//static 静态变量声明，此时变量不再存储在栈空间，而是存储到数据区
	//不会随函数结束而消失，只初始化一次
	i++;
	printf("k=%d,i=%d\n", k,i);
}