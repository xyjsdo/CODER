#include <stdio.h>
#include <stdlib.h>
//����һ��n������Ԫ�ص�����a��������һ��Ԫ�س��ִ�������n / 2�������Ԫ�ء�
//
int main()
{
	int a[11] = { 1,3,4,3,3,3,2,3,3,2,3 };
	int i, num, count;

	num = a[0];
	count = 1;

	for (i = 1; i < 11; i++) {
		if (count > 0) {
			if (a[i] == num) {
				count++;
			}
			else {
				count--;
			}
		}
		else {
			num = a[i];
			count = 1;
		}
	}
	printf("��������Ԫ��Ϊ��%d\n", num);
	system("pause");
}