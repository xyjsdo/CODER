#include <stdio.h>
#include <stdlib.h>

//<<左移 高位补0，低位丢弃
//>>右移 除2 低位丢弃 正数 高位补0， 负数 高位补1
//负数，如果右移，奇数时，+1以后再右移，就是实际的除2
int main()
{
	short i = 0x40;//左移为了高效地实现乘2，但要注意边界，防止溢出。
	i = i >> 1;
	printf("i=%d\n", i);
	system("pause");
}