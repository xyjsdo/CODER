#include <stdio.h>
#include <stdlib.h>
//��ά���鴫�ݵ�ʱ�����д����
void print(int a[][4], int len)
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[3][4] = {1,3,5,7,2,4,6,8,9,11,13,15};
	print(a, 3);//��ά���鲻�ܴ��ݺ���
	system("pause");
}