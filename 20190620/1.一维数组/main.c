#include <stdio.h>
#include <stdlib.h>
#define N 5
//һά�����ڴ��ݵ�ʱ�򣬲��ܽ����鳤�ȴ��ݹ�ȥ
void print(int a[],int len)
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
}



int main()
{
 	int a[N] = {1,2,3};
	int i = 10;
	//a[5] = 6;//����Խ��
	//a[6] = 7;
	//a[7] = 8;
	//a[8] = 9;
	//a[9] = 10;
	//a[10] = 10;
	//a[11] = 11;
	//a[12] = 12;
	print(a, N);
	printf("i=%d\n", i);
	system("pause");
}