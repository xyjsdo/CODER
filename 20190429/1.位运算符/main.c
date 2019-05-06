#include <stdio.h>
#include <stdlib.h>

//<<左移 高位补0，低位丢弃
//>>右移 除2 低位丢弃 正数 高位补0， 负数 高位补1
int main()
{
	short i = 0x40;//左移为了高效地实现乘2，但要注意边界，防止溢出。
	i = i >> 1;
	printf("i=%d\n", i);
	system("pause");
}

//位运算 与自己相异或得到0
//与0相异或 得到自己本身