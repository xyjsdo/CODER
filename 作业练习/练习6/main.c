#include <stdio.h>
#include <stdlib.h>
//给定一个n个整型元素的数组a，其中有一个元素出现次数超过n / 2，求这个元素。
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
	printf("出现最多的元素为：%d\n", num);
	system("pause");
}