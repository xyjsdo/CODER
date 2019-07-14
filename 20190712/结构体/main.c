#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct student {
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
};

int main()
{
	struct student s = { 1001,"lele",'M',20,89.5,"BeiJing" };//结构体虽然只定义了63个字节，但是由于结构体按照最小单元对齐，所以实际占了68个字节
	struct student sarr[3];
	int i;
	printf("%d %s %c %d %5.2f %s\n", s.num, s.name, s.sex, s.age, s.score, s.addr);
	for (i = 0; i < 3; i++) {
		scanf("%d%s %c%d%f%s", &sarr[i].num, sarr[i].name, &sarr[i].sex, &sarr[i].age, &sarr[i].score, sarr[i].addr);
	}
	printf("-----------------------------------------------------------\n");
	for (i = 0; i < 3; i++) {
		printf("%d %s %c %d %5.2f %s\n", sarr[i].num, sarr[i].name, sarr[i].sex, sarr[i].age, sarr[i].score, sarr[i].addr);
	}
	system("pause");

}


//1001 lele M 20 89.50 BeiJing
//1002 lilei M 21 95.4 ShenZhen
//1003 zhangsan M 22 90 Shanghai
//1005 Cristina F 23 92.5 Canada