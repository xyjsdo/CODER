#include <stdio.h>
#include <stdlib.h>

void change(int** p2, int* pj) {
	*p2 = pj;
}
//�����Ӻ�������Ҫ�޸�������ĳһ��һ��ָ�������ֵ����Ҫ�õ�����ָ��
int main()
{
	int i = 10;
	int j = 5;
	int* pi = &i;
	int* pj = &j; 
	int** p2;//����ָ���ֵ��һ��ָ�������ȡ��ֵַ
	p2 = &pi;
	printf("i=%d,j=%d,*pi=%d,*pj=%d,**p2=%d\n", i, j, *pi, *pj,**p2);
	change(&pi, pj);
	printf("i=%d,j=%d,*pi=%d,*pj=%d\n", i, j, *pi, *pj);//pi����5
}

