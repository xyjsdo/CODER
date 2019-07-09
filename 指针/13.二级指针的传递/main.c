#include <stdio.h>
#include <stdlib.h>

void change(int** p2, int* pj) {
	*p2 = pj;
}
//当在子函数中需要修改主函数某一个一级指针变量的值，需要用到二级指针
int main()
{
	int i = 10;
	int j = 5;
	int* pi = &i;
	int* pj = &j; 
	int** p2;//二级指针的值是一级指针变量的取地址值
	p2 = &pi;
	printf("i=%d,j=%d,*pi=%d,*pj=%d,**p2=%d\n", i, j, *pi, *pj,**p2);
	change(&pi, pj);
	printf("i=%d,j=%d,*pi=%d,*pj=%d\n", i, j, *pi, *pj);//pi等于5
}

